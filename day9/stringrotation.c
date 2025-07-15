#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int compare(const void* x, const void *y){
	return *(char*)x - *(char*)y;
}
int main(){
	char str[100], *firstCharString;
	int rotations, len;
	scanf("%s", str);
	len = strlen(str);
	scanf("%d", &rotations);
	firstCharString = (char*)calloc(rotations+1, sizeof(char));
	for (int i = 1; i<=rotations; i++){
		int r;
		char dir;
		scanf(" %c %d",&dir, &r);
		fflush(stdin);
		r = r % len;
		if (toupper(dir)=='L')	
			firstCharString[i-1]= str[r];
		else if (toupper(dir)=='R')
			firstCharString[i-1] = str[len-r];
		puts(firstCharString);
//		printf("%c", str[r]);
	}	
	qsort(firstCharString,rotations, sizeof(char), compare);
	for (int i = 0; i<len-rotations; i++){
		char temp[rotations+1];
		strncpy(temp, str+i, rotations);
		qsort(temp, rotations, sizeof(char), compare);
		if (!strcmp(temp, firstCharString)){
			printf("YES");
			return 0;
		}
	}
	printf("NO");	
	
	return 0;
}