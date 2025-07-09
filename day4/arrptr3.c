#include <stdio.h>

int main(){
	int arr[5], i;
	int *ptr = arr;
	for (int i = 0; i<5; i++)
		scanf("%d",ptr++); 
	
//	for (ptr = arr, i=0;i<5; i++)
//		printf("%d ", *ptr++);
	for (i=0; i<5; i++)
		printf("%d ", *--ptr);
	return 0;
}