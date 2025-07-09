#include <stdio.h>

int main(){
	char *str = "Nandhini";
	for (int i = 0; i<8; i++){
		if (str[i]=='n') continue;
		putc(str[i], stdout);
	}
	return 0;
}