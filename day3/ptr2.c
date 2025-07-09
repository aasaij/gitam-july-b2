#include <stdio.h>

int main(){
	int x, *ptr;
	ptr = &x;
	*ptr = 100;
	x++;
	printf("%d %d %d", x, *ptr, ptr);
	return 0;
}