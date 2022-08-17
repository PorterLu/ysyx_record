#include <stdio.h>
#include "trap.h"
#include <stdint.h>
int main(void){
	int a_array[] = {1, 49, -1, 20, 33, 4000};
	int b_array[] = {400000, 123, -4, -123, 6, 0};
	uint32_t b;
	uint64_t a,result = 0;
	//scanf("%ld %d",&a, &b);
	//if(((a >> 32) != 0) && ((a >> 32) != 0xffffffff))
	//{	
	//	printf("a should be 32-bit number, while a is %lx now\n", a);
	//	return 0;
	//}
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			uint32_t count = 0;
			a = a_array[i];
			b = b_array[j];
			while(b != 0){
				uint32_t tmp = b & 0x01;
				if(count != 31)
					result = result + (a << count) * tmp;
				else 
					result = result - (a << count) * tmp;
				b = b >> 1;
				count ++;
			}
			check(result == a * b);
		}
	}
	//printf("result = %ld\n", result);
	//printf("result = %lu\n", result);
	//printf("count = %d\n", count);
	return 0;
}
