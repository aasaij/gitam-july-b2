//Program to implement selection algorithm
#include <stdio.h>
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
int main(){
	char str[100];
	scanf("%s", str);
	selectionSort(str);
	puts(str);
	return 0;
}

//10, 5, 7, 12, 19, 2
//Phase I
//	2 , 5, 7, 12, 19, 10
//Phase II
//	2 , 5, 7, 12, 19, 10
//Phase III
//	2 , 5, 7, 12, 19, 10
//Phase IV
//	2 , 5, 7, 10, 19, 12
//Phase V
//	2 , 5, 7, 10, 12, 19