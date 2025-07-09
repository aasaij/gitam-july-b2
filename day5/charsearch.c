//Program to count the frequency of a character in a given string
#include <stdio.h>
#include <string.h>
int main(){
	char str[] = "This is testing of strchr()", *ptr;
	ptr = str;
	char searchChar;
	int cnt = 0;
	scanf("%c", &searchChar);
//	if (strchr(str, searchChar)!=NULL)
//		printf("Found");
//	else
//		printf("Not Found");
	while(1){
		ptr = strchr(ptr, searchChar);
		if(!ptr) break;
		cnt++;
		ptr++;
	}
	printf("%d", cnt);
	return 0;
}