#include <stdio.h>
//Program to print natural numbers using recursion
void print(int x){
	if (x==0)
		return;
	else{
		print(x-1); // head recursion
		printf("%3d", x);		
	}		
}
int main(){
	int n;
	scanf("%d", &n);
//	for (int i = 1; i<=n; printf("%3d", i++));
	print(n);
	return 0;
}