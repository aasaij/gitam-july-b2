#include <stdio.h>

int main(){
	printf("%d", 10 << 30);
	return 0;
}
//
//0000 0000
//0000 0001 1's binary
//
//1111 1110  
//0000 0001  
//1111 1111  2's complement of 1's binary
//
//1111 1111