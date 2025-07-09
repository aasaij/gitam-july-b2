//Program to demonstrate void pointer
#include <stdio.h>

int main(){
	int x=10;
	float f = 10.5;
	char c = 'X';
	double d = 10.89;
	void *ptr;
	ptr = &x;
	printf("%d\n", *(int*)ptr);
	ptr = &f;
	printf("%g\n", *(float*)ptr);
	ptr = &c;
	printf("%c\n", *(char*)ptr);
	ptr = &d;
	printf("%g\n", *(double*)ptr);
	return 0;
}