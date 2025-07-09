//program to remove duplicate elements in the sorted list
#include <stdio.h>
//removing duplicates
int removeDuplicates(int arr[], int size){
	int j=0;
	for (int i = 1; i<size-1;i++){
		while(arr[j]==arr[i] && i<size) i++;
		arr[++j] = arr[i];
	}	
	return j;	
}

void printArray(int arr[], int n){
	printf("\n[");
	for (int i = 0; i<n-1; i++)
		printf("%d, ", arr[i]);
	printf("%d]\n", arr[n-1]);
}
int main(){
	int list[] = {1,2,3,4,4,5,5,6,6,6};
	int size = sizeof(list)/sizeof(list[0]);
	size = removeDuplicates(list, size);
	printArray(list, size);
	return 0;
}