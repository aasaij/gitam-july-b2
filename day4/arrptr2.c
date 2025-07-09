#include <stdio.h>

int main(){
	int arr[5];
	for (int i = 0; i<5; i++)
		scanf("%d", arr+i); // 1 2 3 4 5
	
	for (int i = 0; i<5; i++)
		printf("%d ", *(arr+i));
	//5 
	return 0;
}