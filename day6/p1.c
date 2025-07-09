#include <stdio.h>

int main(){
	auto int x = 10;
	static int y = x;
	if (x==y)
		printf("true");
	else
		printf("false");
	
	return 0;
}