#include <stdio.h>
void welcome() __attribute__ ((constructor));
void thanku() __attribute__ ((destructor));

void welcome(){
	printf("Good Morning to everyone!\n");
}

void thanku(){
	printf("Thank you so much for being very active in the class\n");
}

int main(){
	printf("\nYou are all Engineers!\n");
	return 0;
}