#include <stdio.h>
#include <string.h>

int main(){
//	char *str = "Himaja";
	char str[100];
	int len;
	scanf("%s", str);
	len= strlen(str);
	for (int i = 1; i<=len; i++)
		printf("%-*.*s%*.*s\n", len,i,str, len,i,str);
		
	return 0;
}

//
//
//Himaja
//
//H
//Hi
//Him
//Hima
//Himaj
//Himaja
