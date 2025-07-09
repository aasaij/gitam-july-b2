//Program to print diagonal and off diagonal elements
#include <stdio.h>
int main(){
	int size;
	scanf("%d", &size);
	int arr[size][size];
	for (int r = 0; r<size; r++){
		for (int c = 0; c<size; c++)
			scanf("%d", &arr[r][c]);
	}
	printf("\nMain diagonal elements : ");
	for (int r = 0; r<size; r++)
		printf("%d", arr[r][r]);
	printf("\nOff diagonal elements : ");
	for (int r = 0; r<size; r++)
		if (r != size-r-1)
			printf("%d", arr[r][size-r-1]);	
	return 0;
}