//Program to find an element in the list
#include <stdio.h>
int main(){
	int size, searchElement;
	scanf("%d", &size);
	//allocating memory dynamically
	int arr[size];
	for (int i = 0; i<size; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &searchElement);
	//implementing search algorithm - linear
	for (int index = 0; index<size; index++){
		if (*(arr+index)==searchElement){
			printf("Found!");
			return 0; //terminating the app
		}
	}
	printf("Not Found!");
	return 0;
}