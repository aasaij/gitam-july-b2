#include <stdio.h>

int main(){
	char str[100];
//	scanf("%s", str); // accept a word
// 	gets(str);
    scanf("%99[^\n]s", str);
    // fgets(str, 99, stdin);
// 	puts(str);
    printf("%s this is testing", str);
	
	return 0;
}