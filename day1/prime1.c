//Program to check whether the given is prime or not
//Method 1

#include <stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d", &x);
	if (x == 1)
		printf("Neither prime or composite!");
	else if ( x > 3 && (x % 2 == 0 || x % 3 == 0)){
		printf("Not Prime");
	}
	else{
		for (int i = 5; i<=sqrt(x); i+=6){
			if (x % i == 0 || x % (i+2)==0){
				printf("Not Prime");
				return 0;
			}
		}
		printf("Prime");
	}
	
	return 0;
}
//Attendance Link : https://bit.ly/CCC-AH
//Trainer Name : Tambi  (Asaithambi Jay)
//Session : FN







