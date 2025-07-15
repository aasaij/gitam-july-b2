//Program to implement insertion sort algorithm
#include <stdio.h>

void insertionSort(int arr[], int n){
	for (int i = 1;i<n; i++){
		int key = arr[i], j;
		//finding the position where the key should be inserted
		for (j = i-1;j>=0 && arr[j]>key;j--)
			arr[j+1] = arr[j];
		arr[j+1]=key;
	}
}
void printArray(int arr[], int n){
	printf("\n[");
	for (int i = 0; i<n-1; i++)
		printf("%d,", arr[i]);
	printf("%d]\n", arr[n-1]);
}

int main(){
	int arr[] = {10, 7, 12, 3, 11, 16, 4, 21};
	int size = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, size);
	printArray(arr, size);
	return 0;
}
