//Program to implement bubble sort algorithm
#include <stdio.h>
#include <string.h>
//implementing bubble sort
void bubbleSort(int size, int len, char list[size][len]){
	//Number of names to be sorted
	for (int i = 1; i<=size; i++){
		//Number of names to be compared with
		for (int j = 0; j<size-i; j++){
			//comparing jth j+1th element
			if (strcmp(list[j], list[j+1])>0){
				//Swapping j and J+1 names
				char str[len];
				strcpy(str, list[j]);
				strcpy(list[j], list[j+1]);
				strcpy(list[j+1], str);
//				list[j] = (list[j]+list[j+1]) - (list[j+1]=list[j]);
			}
		}
	}
}
void printArray(int size, int len, char list[size][len]){
	printf("\n[");
	for (int i = 0; i<size-1; printf("\"%s\",",list[i++]));
	printf("\"%s\"]", list[size-1]);
}
int main(){
	char input[][20] = {"dheeraj", "kushal", "likhith","asaithambi", "ram","satish","nandhini", "bhagya", "sidharth"};
	int size = sizeof(input)/sizeof(input[0]);
	bubbleSort(size, 20, input);
	printArray(size,20, input);
	return 0;
}