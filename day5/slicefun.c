#include <stdio.h>
#include <stdlib.h>
char* slice(char str[], int startIndex, int numChars){
	char *temp = calloc(numChars+1, sizeof(char));
	for(int i= startIndex, j=0;j<numChars && str[i];i++, j++)
		temp[j]= str[i];
	return temp;
}

int main(){
	printf("%s", slice("Sathwik", 1,5));
	return 0;
}

Attendance : https://bit.ly/CCC-AH

Assessment links for 07-07-2025:

FN: https://tinyurl.com/hx99u6fd

password: ccc[all are small characters]