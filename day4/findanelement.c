//Program to find an element in the list
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr, size, searchElement;
	scanf("%d", &size);
	//allocating memory dynamically
	arr = (int*)malloc(size * sizeof(int));
	for (int i = 0; i<size; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &searchElement);
	//implementing search algorithm - linear
	for (int index = 0; index<size; index++){
		if (*(arr+index)==searchElement){
			printf("Found!");
			exit(0); //terminating the app
		}
	}
	//removing the memory
	free(arr);
	printf("Not Found!");
	return 0;
}