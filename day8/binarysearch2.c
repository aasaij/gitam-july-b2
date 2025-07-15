#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void* x, const void* y){
	return strcmp((char*)y, (char*)x);
}
int main(){
	char input[][20] = {"dheeraj", "kushal", "likhith","asaithambi", "ram","satish","Nandhini", "Bhagya", "sidharth"};
	int size = sizeof(input)/sizeof(input[0]);
//	char searchName[20];
	qsort(input, size, 20, compare);
	for (int i = 0; i<size; puts(input[i++]));
//	scanf("%s", searchName);
//	printf("%s", bsearch(searchName, input,size, 20,compare)?"Found":"Not Found");
	return 0 ;
}