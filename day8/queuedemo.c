//Program to implement Queue 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct {
	int rollno;
	char name[30];
	double salary;
}emp;
typedef struct Queue{
	int size; //refers the queue size
	int front; //refers the first element
	int rear; //refers the last element
	emp *employees;	
}queue;
queue *createQueue(int qSize){
	queue *temp = (queue*)calloc(1, sizeof(queue));
	temp->size = qSize;
	temp->front = -1;
	temp->rear = -1;
	temp->employees = (emp*)calloc(qSize, sizeof(emp));
	return temp;
}
bool isEmpty(queue *q){
	return (q->front == -1 && q->rear == -1);
}
bool isFull(queue *q){
	return q->rear == q->size-1;
}
emp* getEmployee(){
	emp *e = (emp*)calloc(1, sizeof(emp));
	printf("Employee ID   : ");
	scanf("%d", &e->rollno);
	printf("Employee Name : ");
	scanf("%s", e->name);
	printf("Salary        : ");
	scanf("%lf", &e->salary);
	return e;
}
bool enqueue(queue *q){
	if (!isFull(q)){
		emp e = *getEmployee();
		if (q->front ==-1)
			q->front = 0;
		q->rear++;
		q->employees[q->rear] = e;
		return true;
	}
	return false;
}
emp* dequeue(queue *q){
	if (!isEmpty(q)){
		if (q->front+1==q->size){
			q->front = q->rear = -1;
		}
		else
			return &(q->employees[(q->front)++]);
	}			
	return NULL;
}

emp* front(queue *q){
	if (!isEmpty(q))
		return &(q->employees[q->front]);
	return NULL;
}


void printEmployee(emp e){
	printf("Employee ID   : %d\n", e.rollno);
	printf("Employee Name : %s\n", e.name);
	printf("Salary        : %.2lf\n",e.salary);
}

void mainMenu(){
	printf("\nQueue Operations Demo\n");
	printf("*********************\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display front\n");
	printf("4. Exit\n");
	printf("\nSelect your choice : ");
}
int main(){
	queue *app;
	int qSize;
	printf("Queue size : ");
	scanf("%d", &qSize);
	app = createQueue(qSize);
	while(1){
		int choice;
		mainMenu();
		scanf("%d", &choice);
		switch(choice){
			case 1:
				if(enqueue(app))
					printf("Enqueued..\n");
				else
					printf("Queue is full!\n");
				break;
			case 2:{
				emp *e = dequeue(app);
				if (e){
					printEmployee(*e);
				}
				else
					printf("Queue is empty!");
				break;
			}
			case 3:{
				emp *e = front(app);
				if (e){
					printEmployee(*e);
				}
				else
					printf("Queue is empty!");
				break;
			}
			case 4:
				printf("Thank you so much for being very silent in the class!");
				exit(0);
			default:
				printf("Invalid choice...\n");			
		} //switch
		
	} // while
	return 0;
}