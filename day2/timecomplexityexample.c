#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int k = 1; k<=2; k++)
		for (int i = 1; i<=n;i++){
			for (int j = 1; j<=n; j++)
				printf("*");
			printf("\n");
		}
	for (int i = 1; i<=n; i++)
		printf("%3d", i);
	n = n+ 1;
	n = n + 2;
	n = n + 5; 
	n = n + 7;
}
//O(1) --> Constant time
//O(log N) --> Logarithmic time
//O(sqrt(N)) --> Square root time
//O(N) --> Linear time
//O(N log N) --> Linearlogarithmic time
//O(N^2) --> Quadratic Time
//O(2^n) --> Exponential Time
