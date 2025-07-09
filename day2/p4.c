#include <stdio.h>

int main(){
	int x = 65;
	char c = 250;  // 250 - 127  ==> 123
	printf("%c %d", x, c);
	
	return 0;
}

//-128 + 123 => -5