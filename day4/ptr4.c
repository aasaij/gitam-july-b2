#include <stdio.h>

int main(){
//	int *ptr;  // wild pointer
//	int *ptr1 = NULL; // NULL pointer
	int x = 10, y;
	int *ptr = &x;
	*ptr += 10;
	y = *ptr++; // y = *ptr; ptr = ptr + 1
	printf("%d %d %d", x, y, *ptr);
	return 0;
}