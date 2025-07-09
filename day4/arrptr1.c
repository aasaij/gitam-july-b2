//Program to demonstrate arrays and pointers
#include <stdio.h>

int main(){
	int arr[] = {10,20,30,430, 23, 45,67};
//	int *ptr = arr;
	int *ptr = &arr[0];
	int size = sizeof(arr)/sizeof(arr[0]);
//	arr = arr + 5;
//	for (int i = 0; i<size; i++)
//		printf("%d ", *(arr+i));
//	printf("%d ", *arr);
//	printf("%d ", *(arr+1));
//	printf("%d ", *(arr+2));
//	printf("%d ", *(arr+3));
	ptr = ptr + 2;
	for (int i = 0; i<size; i++)
		printf("%d ", *(ptr+i));
	return 0;	
}