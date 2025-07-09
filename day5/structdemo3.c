#include <stdio.h>
#include <string.h>
//typedef int MARK;
typedef struct {
	int rollno;
	char name[30];
	float salary;
}emp;
//typedef struct Employee emp;
int main(){
	emp e1, e2;
	e1.rollno = 101;
	strcpy(e1.name, "Satish");
	e1.salary = 1000000;
	printf("%d %s %.2lf", e1.rollno, e1.name, e1.salary);
	return 0;
}