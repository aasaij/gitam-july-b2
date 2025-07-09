#include <stdio.h>
#include <stdbool.h>
//function definition
void greet(char name[], char gender){
	if (gender =='F' || gender =='f')
		printf("Good Morning \"Ms. %s\"\n", name);
	else
		printf("Good Morning \"Mr. %s\"\n", name);
}
bool isAlpha(char ch){
	return ((ch >=97 && ch <=122) || (ch>=65 && ch <=90));
}
int main(){
//	//function calling
//	greet("Likhith", 'M');
//	greet("Bhagya", 'F');
	char x;
	scanf("%c", &x);
//	if (isAlpha(x))
//		printf("Alphabet");
//	else
//		printf("Not an alpha");
	printf("%sAlphabet", isAlpha(x)?"":"Not an ");
	return 0;
}

Assessment-01: https://tinyurl.com/478c6ckr






