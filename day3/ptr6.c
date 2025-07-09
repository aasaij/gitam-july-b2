#include <stdio.h>

int main(){
	int x=10, *ptr;
	ptr = &x;
//	printf("Welcome");
	++(*ptr);
	x++;
	printf("%d %d %p %p", x, *ptr, ptr, &x);
	return 0;
}