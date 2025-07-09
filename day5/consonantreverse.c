//
//Input:
//	education@123
//output
//	enutaciod@123
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isVowel(char ch){
	return strchr("aeiouAEIOU", ch)?1:0;
}
int isConsonant(char ch){
	return isalpha(ch) && !isVowel(ch);
}
int main(){
	char str[100];
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0, j = len-1; i<j; ){
		while(i < j && !isConsonant(str[i])) i++;
		while(i<j && !isConsonant(str[j])) j--;
		if(i<j){
			str[i] = str[i]+str[j]-(str[j]=str[i]);
			i++,j--;
		}
	}
	puts(str);
	return 0;
}