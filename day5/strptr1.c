#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
	int rollno;
	char name[30];
	float salary;
}emp;

int main(){
//	emp e1,*ptr;
	emp *ptr;
	ptr = (emp *)calloc(1, sizeof(emp));
//	ptr = &e1;
	ptr->rollno = 102;
	strcpy(ptr->name, "Vallabh");
	ptr->salary = 1100000;
//	printf("%d %s %.2lf", e1.rollno, e1.name, e1.salary) ;
printf("%d %s %.2lf", ptr->rollno, ptr->name, ptr->salary) ;
	return 0;
}