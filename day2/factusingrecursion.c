//Program to find factorial of N using recursion
#include <stdio.h>
unsigned long long int fact(int n){
	if(n<=1)
		return 1;
	return n * fact(n-1);
}

int main(){
	int x;
	scanf("%d", &x);
	printf("%llu", fact(x));
	
	return 0;
}