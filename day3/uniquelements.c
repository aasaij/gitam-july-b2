//Program to print unique elements in the list
#include <stdio.h>
#include <stdbool.h>
void printUniqueElements(int arr[], int n){
	bool found;
	printf("%d ", arr[0]);
	for (int i = 1; i<n; i++){
		found = false;
		for (int j = i-1; j>=0; j--){
			if(arr[i]==arr[j]){
				found = true;
				break;
			}
		}
		if(!found)
			printf("%d ", arr[i]);		
	}
}

int main(){
	int list[] = {1,2,3,4,2,3,4,5,2,3,7};
	int size = sizeof(list)/sizeof(list[0]);
	printUniqueElements(list, size);
	return 0;
}