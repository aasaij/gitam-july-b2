//int a = 10
//int *ptr;
//ptr = &a;
//
//&  --> Address operator
//*  --> indirection or dereferencing or value at operator
//->  --> structure pointer member accessing operator
#include <stdio.h>

int main(){
	int x = 10, y = 100;
	int *ptr;
	ptr = &x;
	*ptr = 100;
//	ptr = (int*)100;  segmentation error
	printf("%d", *ptr);
	ptr = &y;
	printf("%d", *ptr);
	
	return 0;
}