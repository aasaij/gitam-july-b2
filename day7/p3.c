#include <stdio.h>
//#define square(x) x*x
#define square(x) (x*x)
#define max(x,y) x>y?x:y
int main(){
	printf("%d", 100/square(10));
	printf("\n%d", max(10,20));
	printf("\n%g", max(10.5, 12.5));
	printf("\n%c", max('a', 'A'));
	return 0;
}