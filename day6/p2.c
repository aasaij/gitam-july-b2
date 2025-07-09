#include <stdio.h>

int main(){
	for (int i = 1; i<=10; i++){
		static int x = 10;
		printf("%d", x++);
	}
//	printf("%d", x);
	return 0;
}