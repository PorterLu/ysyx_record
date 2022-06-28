//a simple cpu simulator
//four instructions come following:
//instruction format    | meaning 			| instruction constructin
//1. mov rt, rs 	| R[rt] <- R[rs]		| 0000|rt:2bits|rs:2bits| 
//2. add rt, rs		| R[rt] <- R[rs] + R[rt]	| 0001|rt:2bits|rs:2bits|
//3. load addr		| R[0] <- M[addr]		| 1110|addr:4bits       |
//4. store addr 	| M[addr] <- R[0]		| 1111|addr:4bits  	|


#include <stdint.h>
#include <stdio.h>

#define NREG 4
#define NMEM 16

typedef union{
	struct {uint8_t rs:2 , rt:2, op: 4;} rtype;	//R type instruction
       	struct {uint8_t addr: 4, op: 4;} mtype;		//M type instruction
	uint8_t inst;					//inst used to assign a value easily
}inst_t;

#define DECODE_R(inst) uint8_t rt = (inst).rtype.rt, rs = (inst).rtype.rs	//decode to get operand
#define DECODE_M(inst) uint8_t addr = (inst).mtype.addr

uint8_t pc; 						//register  crucial for a state machine
uint8_t R[NREG] = {};
uint8_t M[NMEM] = {
	0b11100110,	//load 6#
	0b00000100,	//mov r1, r0
	0b11100101,	//load 5#
	0b00010001,	//add r0,r1
	0b11110111,	//store 7#
	0b00010000,	//x = 16
	0b00100001,	//y = 33
	0b0000000,	//z = 0
};

int halt = 0;

void exec_once(){
	inst_t this;
	this.inst = M[pc];				//fetch instruction
	switch(this.rtype.op){				//decode and execute
		case 0b0000: {	DECODE_R(this); R[rt] = R[rs]; break;}	
		case 0b0001: {	DECODE_R(this); R[rt] += R[rs]; break;}
		case 0b1110: {	DECODE_M(this); R[0] = M[addr]; break;}
		case 0b1111: {	DECODE_M(this); M[addr] = R[0]; break;}
		default:
			printf("Invalid instruciotn with opcode = %x, halting...\n", this.rtype.op);
			halt = 1;
			break;
	}
	pc++;
}

int main(void){
	while(1){
		exec_once();
		if(halt) break;
	}
	printf("The result of 16 + 33 is %d\n",M[7]);
	return 0;
}

