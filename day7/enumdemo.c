#include <stdio.h>

typedef enum weekDays{MONDAY=1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY,SUNDAY} days;

int main(){
	days x;
	printf("Enter day number [ 1... 7] : ");
	scanf("%d", &x);
//	if(x >=MONDAY && x <= FRIDAY)
//		printf("It's week day");
//	else if (x == SATURDAY || x == SUNDAY)
//		printf("It's week end. Enjoy your holiday!");
//	else
//		printf("Invalid day number");
//	switch(x){
//		case MONDAY ... FRIDAY:
//			printf("It's week day"); break;
//		case SUNDAY: case SATURDAY:
//			printf("It's week end. Enjoy your holiday!"); break;
//		default:
//			printf("Invalid day number");
//	}
	printf("%d", SATURDAY);
	return 0;
}