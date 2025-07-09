#include <stdio.h>
#include <string.h>
int main(){
	char str[100]= "Likhith", str1[100] = " is sooo smart";
//	strcat(str, str1); // str = str + str1
	strncat(str, str1, 8);
	puts(str);
	return 0;	
}