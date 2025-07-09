#include <stdio.h>

int main(){
	int x=10, *ptr;
	ptr = &x;
	*ptr++ = 100;
	x++;
	printf("%d %d %p %p", x, *ptr, ptr, &x);
	return 0;
}