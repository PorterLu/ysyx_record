#include "trap.h"

int array[167772];

int main(void){

	int i;
	for(i = 0; i < 167772; i++){
		array[i] = i;//(i * 123 + 4) / 3 * 216 ;
	}

	for(i = 0; i < 167772; i++){
		check(array[i] == i);//((i * 123 + 4) / 3 * 216)
	}
}
