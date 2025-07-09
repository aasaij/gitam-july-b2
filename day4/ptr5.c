#include <stdio.h>

int main(){
//	int *ptr;  // wild pointer
//	int *ptr1 = NULL; // NULL pointer
	int x = 10;
	int *ptr = &x;
	*ptr += 10;
	*++ptr = 200; 
	printf("%d %d %d", x, *ptr);
	return 0;
}