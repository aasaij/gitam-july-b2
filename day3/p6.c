#include <stdio.h>

int main(){
//	char *str= "Sathish"; //Immutable
	char str[] = "Sathish"; //Mutable
	printf("%p ", str);
	puts(str);
	str[0] = 'M';
	printf("%p ", str);
	puts(str);
//	str[0] = 'M';
//	puts(str);
//	int a = 10;
//	printf("%p\n", &a);
//	a = 100;
//	printf("%p\n", &a);
	return 0;
}