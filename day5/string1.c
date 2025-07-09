#include <stdio.h>
#include <string.h>
int main(){
	char str[100], str1[100];
//	str = "Likhith";
	strcpy(str, "Likhith");
	printf("%s", str);
//	str1 = str;
	strcpy(str1, str);
	puts(str1);
	return 0;	
}