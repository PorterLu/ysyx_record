#include <iostream>
#include <pmem.h>
#include <mmio.h>
#include <cstdio>
#include <reg.h>
#include <state.h>
#include <sim.h>
#include "src/axi4_mem.hpp"

static uint8_t pmem[MSIZE] __attribute((aligned(4096))) = {};
//axi4_mem<32,64,4> mem(4096l*1024*1024);


//enum slave_state {IDLE, RADDR_RESP, RDATA_RESP, WADDR_RESP, WDATA_RESP, W_ACK};
uint32_t read_count = 0;
uint32_t write_count = 0;
uint32_t index_addr = 0;
uint32_t burst_size = 0;
uint32_t addr = 0;

slave_state mem_state = IDLE;

/*
class mem_pin{
	//写地址通道
public:
	bool 		*io_slave_awready;
	bool 		*io_slave_awvalid;
	uint32_t 	*io_slave_awaddr;
	uint32_t 	*io_slave_awid;		//4-bit
	uint32_t 	*io_slave_awlen; 	//8-bit
	uint32_t  	*io_slave_awsize ; 	//3-bit
	uint32_t 	*io_slave_awburst; 	//2-bit

	//写通道
	bool 		*io_slave_wready; 
	bool 		*io_slave_wvalid;
	uint64_t	*io_slave_wdata;
	uint32_t 	*io_slave_wstrb;
	bool 		*io_slave_wlast;

	//写响应通道
	bool 		*io_slave_bready;
	bool 		*io_slave_bvalid;
	uint32_t 	*io_slave_bresp;		//2-bit
	uint32_t 	*io_slave_bid;		//4-bit

	//读地址通道
	bool 		*io_slave_arready;
	bool 		*io_slave_arvalid;
	uint32_t 	*io_slave_araddr;
	uint32_t 	*io_slave_arid;		//4-bit
	uint32_t 	*io_slave_arlen;		//8-bit
	uint32_t 	*io_slave_arsize;	//3-bit
	uint32_t 	*io_slave_arburst;	//2-bit

	//读通道
	bool 		*io_slave_rready;
	bool 		*io_slave_rvalid;
	uint32_t 	*io_slave_rresp;		//2-bit
	uint64_t 	*io_slave_rdata;
	bool 		*io_slave_rlast;
	uint32_t 	*io_slave_rid;		//4-bit

	mem_pin():
		io_slave_awready((bool*)&(top->io_master_awready)),
		io_slave_awvalid ((bool*)&(top->io_master_awvalid)),
		io_slave_awaddr ((uint32_t*)&(top->io_master_awaddr)),
		io_slave_awid ((uint32_t*)&(top->io_master_awid)),
		io_slave_awlen ((uint32_t*)&(top->io_master_awlen)), 	
		io_slave_awsize ((uint32_t*)&(top->io_master_awsize)), 	
		io_slave_awburst ((uint32_t*)&(top->io_master_awburst)), 	
		io_slave_wready ((bool*)&(top->io_master_wready)), 
		io_slave_wvalid ((bool*)&(top->io_master_wvalid)),
		io_slave_wdata ((uint64_t*)&(top->io_master_wdata)),
		io_slave_wstrb ((uint32_t*)&(top->io_master_wstrb)),
		io_slave_wlast ((bool*)&(top->io_master_wlast)),
		io_slave_bready ((bool*)&(top->io_master_bready)),
		io_slave_bvalid ((bool*)&(top->io_master_bvalid)),
		io_slave_bresp ((uint32_t*)&(top->io_master_bresp)),		
		io_slave_bid ((uint32_t*)&(top->io_master_bid)),		
		io_slave_arready ((bool*)&(top->io_master_arready)),
		io_slave_arvalid ((bool*)&(top->io_master_arvalid)),
		io_slave_araddr ((uint32_t*)&(top->io_master_araddr)),
		io_slave_arid ((uint32_t*)&(top->io_master_arid)),		
		io_slave_arlen ((uint32_t*)&(top->io_master_arlen)),		
		io_slave_arsize ((uint32_t*)&(top->io_master_arsize)),	
		io_slave_arburst ((uint32_t*)&(top->io_master_arburst)),	
		io_slave_rready ((bool*)&(top->io_master_rready)),
		io_slave_rvalid ((bool*)&(top->io_master_rvalid)),
		io_slave_rresp ((uint32_t*)&(top->io_master_rresp)),		
		io_slave_rdata ((uint64_t*)&(top->io_master_rdata)),
		io_slave_rlast ((bool*)&(top->io_master_rlast)),
		io_slave_rid ((uint32_t*)&(top->io_master_rid)){}
};*/

/*
bool * io_slave_awready = (bool*)(&(top->io_master_awready));
bool * io_slave_awvalid = (bool*)(&(top->io_master_awvalid));
uint32_t * io_slave_awaddr = (uint32_t*)(&(top->io_master_awaddr));
uint32_t * io_slave_awid = (uint32_t*)(&(top->io_master_awid));
uint32_t * io_slave_awlen = (uint32_t*)(&(top->io_master_awlen));
uint32_t * io_slave_awsize = (uint32_t*)(&(top->io_master_awsize)); 	
uint32_t * io_slave_awburst = (uint32_t*)(&(top->io_master_awburst)); 	
bool * io_slave_wready = (bool*)(&(top->io_master_wready)); 
bool * io_slave_wvalid = (bool*)(&(top->io_master_wvalid));
uint64_t * io_slave_wdata = (uint64_t*)(&(top->io_master_wdata));
uint32_t *io_slave_wstrb =(uint32_t*)(&(top->io_master_wstrb));
bool * io_slave_wlast = (bool*)(&(top->io_master_wlast));
bool * io_slave_bready = (bool*)(&(top->io_master_bready));
bool * io_slave_bvalid = (bool*)(&(top->io_master_bvalid));
uint32_t * io_slave_bresp = (uint32_t*)(&(top->io_master_bresp));		
uint32_t * io_slave_bid = (uint32_t*)(&(top->io_master_bid));		
bool * io_slave_arready = (bool*)(&(top->io_master_arready));
bool * io_slave_arvalid = (bool*)(&(top->io_master_arvalid));
uint32_t * io_slave_araddr = (uint32_t*)(&(top->io_master_araddr));
uint32_t * io_slave_arid = (uint32_t*)(&(top->io_master_arid));		
uint32_t * io_slave_arlen = (uint32_t*)(&(top->io_master_arlen));		
uint32_t * io_slave_arsize = (uint32_t*)(&(top->io_master_arsize));	
uint32_t * io_slave_arburst = (uint32_t*)(&(top->io_master_arburst));	
bool * io_slave_rready = (bool*)(&(top->io_master_rready));
bool * io_slave_rvalid = (bool*)(&(top->io_master_rvalid));
uint32_t * io_slave_rresp =(uint32_t*)(&(top->io_master_rresp));		
uint64_t * io_slave_rdata = (uint64_t*)(&(top->io_master_rdata));
bool * io_slave_rlast = (bool*)(&(top->io_master_rlast));
uint32_t * io_slave_rid = (uint32_t*)(&(top->io_master_rid));
*/

//class mem_pin mem_interface;

/*
void mem_sync(){
	mem_interface.io_slave_awvalid = top->io_master_awvalid;
	top->io_master_awready = mem_interface.io_slave_awready;
	mem_interface.io_slave_awaddr = top->io_master_awaddr;
	mem_interface.io_slave_awid = top->io_master_awid;
	mem_interface.io_slave_awlen = top->io_master_awlen;
	mem_interface.io_slave_awsize = top->io_master_awsize;
	mem_interface.io_slave_awburst = top->io_master_awburst;

	mem_interface.io_slave_wvalid = top->io_master_wvalid;
	top->io_master_wready = mem_interface.io_slave_wready;
	mem_interface.io_slave_wdata = top->io_master_wdata;
	mem_interface.io_slave_wstrb = top->io_master_wstrb;
	mem_interface.io_slave_wlast = top->io_master_wlast;

	top->io_master_bvalid = mem_interface.io_slave_bvalid;
	mem_interface.io_slave_bready = top->io_master_bready;
	top->io_master_bresp = mem_interface.io_slave_bresp;
	top->io_master_bid = mem_interface.io_slave_bid;

	top->io_master_arready = mem_interface.io_slave_arready;
	mem_interface.io_slave_arvalid = top->io_master_arvalid;
	mem_interface.io_slave_araddr = top->io_master_araddr;
	mem_interface.io_slave_arid = top->io_master_arid;
	mem_interface.io_slave_arlen = top->io_master_arlen;
	mem_interface.io_slave_arsize = top->io_master_arsize;
	mem_interface.io_slave_arburst = top->io_master_arburst;

	mem_interface.io_slave_rready = top->io_master_rready;
	top->io_master_rvalid = mem_interface.io_slave_rvalid;
	top->io_master_rresp = mem_interface.io_slave_rresp;
	top->io_master_rdata = mem_interface.io_slave_rdata;
	top->io_master_rlast = mem_interface.io_slave_rlast;
	top->io_master_rid = mem_interface.io_slave_rid;
}*/

/*
void mem_default(){
	//mem_interface
}*/

//什么情况要把信号进行一个拉低的操作，如果收到了valid信号，下一个周期ready需要拉起，拉起之后什么时候可以拉低操作，
//可以自动拉低，可以在cycle后都进行拉低的操作，哪些的信号需要拉低，valid需要拉低？valid需要在ready响应后拉低，
//ready可以自动拉低，其他的信号可以不用管。
//如何进行一次考虑ready信号发出的时机，这个时机是该在上升沿之前，还是上升沿之后，这个应该不影响，只需在上升沿之前
//输出ready信号即可
void mem_step(){
	//printf("mem_step\n");
	//printf("addr: %lx\n", mem_interface.io_slave_araddr);
	//printf("arlen: %d\n", mem_interface.io_slave_arlen);
	//printf("read_count %d\n", read_count);
	//printf("index:%d\n", index_addr);
	//printf("count:%d\n", read_count);
	//printf("mem_step: %d\n", mem_state);
	//printf("I am here");
	//int a;
	//scanf("%d", &a);

	switch(mem_state){
		case(IDLE):{
			//将握手信号置为fasle
			/*
			*io_slave_awready = false;	
			*io_slave_arready = false;	
			*io_slave_wready = false;		
			*io_slave_bvalid = false;		
			*io_slave_rvalid = false; 
			*io_slave_rlast = false;
			*/
			top->io_master_awready = false;
			top->io_master_arready = false;
			top->io_master_wready = false;
			top->io_master_bvalid = false;
			top->io_master_rvalid = false;
			top->io_master_rlast = false;

			//printf("slave Idle\n");
			if(top->io_master_awvalid){
				mem_state = WADDR_RESP;
			}else if(top->io_master_arvalid){
				mem_state = RADDR_RESP;
			}
		}
		break;

		//接受到master的valid信号，转化状态到ADDR_RESP,于是就可以可以返回一个ready信号，同时设置这次传输所用的参数
		case(RADDR_RESP):{
			//printf("slave read addr\n");
			top->io_master_arready = true; 
			mem_state = RDATA_RESP;
			read_count = top->io_master_arlen + 1;
			burst_size = (1 << (top->io_master_arsize))/8;
			//printf("read_count: %d\n", read_count);
			addr = top->io_master_araddr;
			//printf("addr:%lx\n", top->io_master_araddr);
		}		
		break;


		//rdata_resp这里默认采用突发传输，传送突发长度个数据，每个beat有突发长度的大小，如果接受到ready信号，说明可以将
		//传输指针转移到下一个位置
		case(RDATA_RESP):{
			//printf("slave read data\n");
			top->io_master_rvalid = true;
			//printf("addr:%x count: %d\n", addr + index_addr*burst_size, read_count);
			top->io_master_rdata = pmem_read(addr + index_addr*burst_size, burst_size);
			//printf("count: %d\n\n", read_count);
			if(top->io_master_rready){					//接收到master端的ready信号
				read_count --;
				if(read_count > 0){
					top->io_master_rresp = 0;
					//io_slave_rlast = false;
					index_addr++;
					top->io_master_rlast = false;
					//printf("index_addr:%d\n", index_addr);
					mem_state = RDATA_RESP;
				}else if(read_count == 0){
					top->io_master_rresp = 0;
					//io_slave_rlast = true;
					top->io_master_rlast = true;
					index_addr = 0;
					mem_state = IDLE;
				}
			}
		

			//printf("index_addr:%d\n",index_addr);
			//printf("reponse_data: %lx\n", io_slave_rdata);
			//if(read_count == 0)
			//{
			//}
			//else if(read_count > 0)
		}
		break;

		case(WADDR_RESP):{
			//printf("slave write addr\n");
			top->io_master_awready = true; 
			mem_state = WDATA_RESP; 
			write_count = top->io_master_awlen + 1;
			burst_size = (1 << (top->io_master_awsize))/8;
			addr = top->io_master_awaddr;
		}
		break;

		case(WDATA_RESP):{
			//printf("slave write data\n");
			//printf("write_count:%d\n", write_count);
			//接受数据，进行响应
			top->io_master_wready = true;
			//printf("I am here\n");
			if(top->io_master_wvalid){
				//printf("addr + index_addr * 8 = %lx\n", addr + index_addr * 8);
				pmem_write(addr + index_addr*burst_size , top->io_master_wdata, top->io_master_wstrb);
				write_count--;
				if(write_count == 0){
					mem_state = W_ACK;
					index_addr = 0;
				}else{
					index_addr ++;
					mem_state = WDATA_RESP;
				}
			}
			/*
			io_slave_wvalid = true
			pmem_write

			write_count --;
			if(write_count > 0){
				io_slave_wdata = top->io_master_wdata;
				//进行一次内存的写
				io_slave_valid = top->io_master_wvalid;
				io_slave_wlast = top->io_master_wlast;
				io_slave_wready = true
				index_addr ++;
				mem_state = WDATA_RESP
			}else if(wirte_count == 0){
				io_slave_valid = top->io_master_wdata;
				io_slave_wready = true
				index_addr = 0;
				state = W_ACK;
			}*/

		}
		break;

		case(W_ACK):{
			//printf("slave Wack\n");
			top->io_master_bvalid = true;
			top->io_master_bresp = 0;
			top->io_master_bid = 1;
			if(top->io_master_bready){
				mem_state = IDLE;
			}
		}
	}
}

/*
enum {
	NOTYPE = 256, EQ, NEQ, HEX, NUM, REG, 
	SYMB, LS, RS, NG, NL, AND, OR, DEREF
};*/

word_t host_read(void *addr, int len) {

  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
  }
  //should not reach here
  return 0;
}

void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
	case 8: *(uint64_t *)addr = data; return;
  }
}

void pc_read(long long raddr, long long *rdata){
	//printf("pc:%lx\n", raddr);

	if(raddr != 0)
	{
		uint64_t addr = (uint64_t) raddr & ~(0x7);
		*rdata = host_read(guest_to_host(addr), 8);
		//printf("pc_data: %lx\n", *rdata);
	}
}

/*
void pmem_read(long long raddr, long long *rdata){
	uint64_t addr = (uint64_t) raddr & ~(0x7);

	if(addr + 8 >= 0x88000000 || addr < 0x80000000)
	{

		printf("addr:%lx is out of bound\n", addr);
		set_bad();
		state = NEMU_ABORT;
		return;
	}
	//assert((addr + 8 < 0x88000000) && (addr >= 0x80000000))

	*rdata = host_read(guest_to_host(addr), 8);

	//printf("\n\n\nraddr: %lx\n\n\n", raddr);
	//printf("addr: %lx\n", addr);
	if(raddr != 0 && !top->reset){
		if(addr + 8 < 0x88000000 && addr >= 0x80000000){
			*rdata = host_read(guest_to_host(addr), 8);
		}else{
			*rdata = mmio_read(raddr, 4);
		}
	}
}*/

uint64_t pmem_read(long long raddr, uint32_t len){
	//uint64_t addr = (uint64_t) raddr & ~(0x07);
	//printf("addr:%lx\n", addr);
	//if(addr === 0)
	//if(addr + 8 >= 0x88000000 || addr < 0x80000000){
		//printf("addr: %lx\n", raddr);
	//	set_bad();
	//	state = NEMU_ABORT;
	//	return -1;
	//}
	//printf("tag 1\n");
	//printf("raddr:%lx; len:%d\n", raddr, len);
	if(raddr != 0){
		if(raddr + 8 < 0x88000000 && raddr >= 0x80000000)
		{
			uint64_t data = host_read(guest_to_host(raddr), len);
			//printf("%lx\n", data);
			//printf("read_addr:%lx; data:%lx\n",addr,data);
			return data;
		}else{
			//return 1;
			//printf("tag 4\n");
			uint64_t data = mmio_read(raddr, 8);
			//printf("rdata: %lx\n",data);
			return data;
		}
	}
	//printf("\n");
	//printf("tag2\n");
	//if(raddr )
}

void pmem_write(long long waddr, long long wdata, char mask){
	//uint64_t addr = (uint64_t) waddr & ~(0x07);
	uint8_t *arr = (uint8_t *) &wdata;
	int i;
	uint8_t tmp = 0x01;

//	printf("waddr:%lx, wdata:%lx, mask:%x\n", waddr, wdata, mask);
	/*
	if(addr >= 0x88000000 || addr < 0x80000000)
	{
		printf("addr:%lx is out of bound\n", addr);
		set_bad();
		state = NEMU_ABORT;
		return;
	}*/
	//printf("yes, i am exactly here\n");
	//printf("waddr:%lx %lx %lx\n", addr, wdata,mask);
	if(waddr != 0){
		if(waddr + 8 < 0x88000000 && waddr >= 0x80000000)
		{
			for(i = 0; i < 8; i++)
			{
				if((mask & tmp) != 0)
					host_write(guest_to_host(waddr + i), 1, arr[i]);
				tmp = tmp << 1;
			}
		}else{
			//printf("mask:%u\n",mask);
			for(i = 0; i < 8; i++)
			{
				if((mask & tmp) != 0)
					mmio_write((waddr + i), 1, arr[i]);
				tmp = tmp << 1;
			}
		}
	}
}


word_t paddr_read(paddr_t addr, int len)
{
	if(addr >= 0x80000000)
	return host_read(guest_to_host(addr), len);
	else
		return 0;
}

void paddr_write(paddr_t addr, int len, word_t data)
{
	if(addr >= 0x80000000)
	host_write(guest_to_host(addr), len, data);
	//else
	//return 0;
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MBASE;}
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MBASE;}
