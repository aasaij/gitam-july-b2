//Program to demonstrate function pointer
#include <stdio.h>
int sum(int x, int y){
	return x + y;
}
void greet(){
	printf("Good morning Engineers!");
}

int main(){
	int (*add)(int,int)	= sum;
	void (*greeting)() = greet;
	printf("%d\n", add(10,20));
	greeting();
	
	return 0;
}