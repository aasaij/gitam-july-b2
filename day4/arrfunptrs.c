//Program to demonstrate array of function pointers
#include <stdio.h>
void add(int x, int y){
	printf("%d + %d = %d\n", x, y,x+y);
}
void subtract(int x, int y){
	printf("%d - %d = %d\n", x, y,x-y);
}
void product(int x, int y){
	printf("%d x %d = %d\n", x, y,x*y);
}
void divide(int x, int y){
	if (y == 0){
		printf("Division Error!");
	}
	else
		printf("%d / %d = %g\n", x, y,(double)x/y);
}

int main(){
	int a, b;
	void (*calc[4])(int, int) = {add, subtract, product, divide};
	scanf("%d %d", &a, &b);
	for (int i = 0; i<4; i++)
		calc[i](a,b);
	return 0;
}