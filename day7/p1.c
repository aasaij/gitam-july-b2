#include <stdio.h>
int* fun(){
	int x = 10;
	return &x;
}

int main(){
	printf("%d", *fun());
	return 0;
}