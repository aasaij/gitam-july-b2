//Program to demonstrate double pointer
#include <stdio.h>
#include <stdlib.h>
void printLine(int n){
	printf("\n");
	for (int i = 1; i<=n; i++)
		printf("*");
	printf("\n");
}
void printTitle(int n){
	printLine(34+(n*6));
	printf("Student Name%9s","");
	for (int i = 1; i<=n; i++)
		printf("Mark%d ",i);
	printf("Total Average");
	printLine(34+(n*6));		
}

int main(){
	int **marks, size, subjects;	
	scanf("%d %d", &size, &subjects);
	//Array of pointers
	marks =(int **)calloc(size, sizeof(int*));
	char names[size][20];
	for (int i = 0; i<size; i++){
		//allocating memory for every row
		marks[i] = calloc(subjects,sizeof(int));
	}
	//Getting student names and their <subjects> marks
	for (int i = 0; i<size; i++){
		scanf("%s", names[i]);
//		scanf("%d",&marks[i][0]);
		for (int j = 0; j<subjects; j++)
			scanf("%d",&marks[i][j]);
	}
	//printing headining
	printTitle(subjects);
	//printing the students data
	for (int i = 0; i<size; i++){
		printf("%-20s ",names[i]);
		int total=0;
		double avg;
		for (int j = 0; j<subjects; j++){
			printf("%5d ",marks[i][j]);
			total+=marks[i][j];
		}
		printf("%5d ",total);
		avg = (double)total / subjects;
		printf("%7.1lf\n",avg);
	}
	printLine(34+(subjects*6));
	return 0;
}
//***************************************************
//Student Name  Mark1 Mark2 Mark3 Mark4 Total Average
//   20+1			 4+1  6  7
//***************************************************
//Nandhini       10   10     10    10    40    10
//....
//.....
//***************************************************