//Program to check whether bothe strings are anagram or not
#include <stdio.h>
#include <string.h>
void swap(char *x, char *y){
	*x = (*x+*y) - (*y=*x);
}
void selectionSort(char s[]){
	for (int i = 0; s[i]; i++){
		int minIndex = i;
		//finding minimum value index from the rest of the values
		for (int j = i+1; s[j]; j++)
			if (s[minIndex]>s[j])
				minIndex = j;
		//if found then swap
		if (minIndex!= i)
			swap(s+minIndex, s+i);
	}
}
//finding string length
int length(char str[]){
	int i;
	for(i=0;str[i++];);
	return i-1;
}
int main(){
	char str1[100], str2[100];
	scanf("%s %s", str1, str2);
	if (length(str1) == length(str2)){
		selectionSort(str1);
		selectionSort(str2);
		if(!strcmp(str1, str2)){
			printf("Anagram");
			return 0;
		}		
	}
	printf("Not Anagram");
	return 0;
}
//	2 , 5, 7, 10, 12, 19