//program to merge two sorted array
#include <stdio.h>
void mergeArray(int a[], int b[], int an, int bn, int m[]){
	int i, j, k;
	for (i = 0, j = 0, k = 0;i<an && j<bn;){
		if (a[i]<b[j])
			m[k++]=a[i++];
		else
			m[k++] =b[j++];
	}
	while(i<an)
		m[k++]=a[i++];
	while(j<bn)
		m[k++]=b[j++];
}
void printArray(int arr[], int n){
	printf("\n[");
	for (int i = 0; i<n-1; i++)
		printf("%d, ", arr[i]);
	printf("%d]\n", arr[n-1]);
}
int main(){
	int arr[] = {1,2,3,4,5};
	int brr[] = {2,5,7,9,10,11};
	int aSize = sizeof(arr)/sizeof(arr[0]);
	int bSize = sizeof(brr)/sizeof(brr[0]);
	int merge[aSize+bSize];
	mergeArray(arr, brr, aSize, bSize, merge);
	printArray(merge, aSize+bSize);
	return 0;
}