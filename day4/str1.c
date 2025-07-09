//String
//	Sequence characters
//
//char str[100]; // c18 --> String
//
//"Ji Jay" ==> String should enclosed within ""
//'J' ==> character constant
#include <stdio.h>

int main(){
//	printf("%s", "Nandhini");
//	printf("%c", 'Sathis');
	char s1[] = "s";
	char s2 = 's';
//	printf("%d %d", sizeof("s"), sizeof('s'));
	printf("%d %d", sizeof(s1), sizeof(s2));
	return 0;
}