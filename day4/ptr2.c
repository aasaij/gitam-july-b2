#include <stdio.h>

int main(){
	int x, *ptr;
	float f = 10.5;
	float *fptr;
	ptr = &x;
	x = 100;
	printf("%d ", *ptr);
	fptr = &f;
	printf("%g", *fptr);
	
	return 0;
}