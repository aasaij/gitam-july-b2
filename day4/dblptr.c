//Program to demonstrate double pointer
#include <stdio.h>

int main(){
	int x, *ptr, **dptr;
	ptr = &x;
	dptr  = &ptr;
	**dptr = 100;
	
	printf("%d", *ptr);
	return 0;
}