#include <stdio.h>

int x=10; // global variable --> data segment
int total; // bss segnment
static int avg; // bss segment
int main(){
	static int y = 10;	 // data segment
	printf("%d", x); // 0
	
	return 0;
}