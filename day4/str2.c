#include <stdio.h>

int main(){
	char s1[] = "Bhagya";
	char s2[] = {'l', 'i', 'k','h','i','t','h','\0'};
	char s3[] = "Sathis is good";
	
	char *str = "Ji Jay"; // immutable string
	
	s3[10] = '\0';
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s3+11);
	return 0;
}