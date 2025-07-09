
//int arr[][];
//#define size 10
#include <stdio.h>
//int arr[5][4];

//int crr[10][10]= {0};

////int drr[size];
int main(){
//int size = 10;
//int brr[][3] = {{1,2,3}, {2,3,4}, {4,5,6}, {10,20,30,50}};
int brr[][3] = {1,2,3, 2,3,4, 4,5,6, 10,20,30,50};
int size = sizeof(brr)/sizeof(brr[0]);
printf("%d", size);
//int drr[size] = {10,20,30,40}; // error
}
