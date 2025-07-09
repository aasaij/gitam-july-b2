#include <stdio.h>
#include <stdlib.h>
int* fun(){
	int *x;
	x = (int*)calloc(1, sizeof(int));
	*x = 100;
	return x;
}
int main(){
	printf("%d", *fun());
	return 0;
}
