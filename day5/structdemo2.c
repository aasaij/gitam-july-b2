#include <stdio.h>
//bitfields
typedef struct Flag {
	int x : 4;
	int y : 2;
	int z : 3;
}flag;
int main(){
	flag f = {10,7,5};
	printf("%d %d %d", f.x, f.y, f.z);
//	printf("%d", sizeof(flag));
	return 0;
}