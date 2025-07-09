//Program to square the list
#include <stdio.h>
#include <stdlib.h>
int* square(int a[], int n){
//	int sarr[n];
	int *sarr = (int*)malloc(n * sizeof(int));
	for (int i=0; i<n; i++)
		sarr[i]= a[i] * a[i];
	return sarr;
}
void printArray(int a[], int n){
	printf("\n[");
	for (int i = 0; i<n-1; i++)
		printf("%d, ", a[i]);
	printf("%d]\n", a[n-1]);
}
int main(){
	int arr[] = {10,20,6,7,8};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Original Array\n");
	printArray(arr, size);
	printf("Squared Array\n");
	printArray(square(arr, size), size);
	return 0;
}