#include <stdio.h>
void print(int x){
	if (x){
		print(x-1);
		printf("%d ", x);
		print(x-1);
	}
}
int main(){
	print(3);
	return 0;
}