#include <stdio.h>
//bitfields
typedef struct Flag {
	char x : 4;
	short  y : 5;
	long long z : 50;
}flag;
int main(){
	flag f = {.y=8};
	printf("%d %d %d", f.x, f.y, f.z);
//	printf("%d", sizeof(flag));
	return 0;
}