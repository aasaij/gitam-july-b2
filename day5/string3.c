#include <stdio.h>
#include <string.h>
int main(){
	char str1[]= "dheeraj";
	char str2[] = "Dheeraj";
//	printf("%d", strcmp(str2, str1));
	printf("%d", strcasecmp(str2, str1));
	return 0;	
}