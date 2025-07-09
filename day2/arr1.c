#include <stdio.h>

int main(){
	double arr[] = {10,234,345,45,576,57,678};
	printf("%d", sizeof(arr)/sizeof(arr[0]));
//	int arr[10];
//	int arr[10] = {10};
//	arr[4] = 100;
//	int arr[10] = {[5]=100};
//	int arr[10] = {[5]=100, [1]=200, [0]=300};
//	printf("%d %d", arr[0], arr[1]);
	return 0;
}