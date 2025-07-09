//Program to implement doubly linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	struct Node *prev;
	char element;
	struct Node *nxt;
}node;
node* createNode(char data){
	node* temp = (node*)calloc(1, sizeof(node));
	temp->element = data;
	return temp;
}
node* addFirst(node* list, char data){
	//creating new node
	node* newNode = createNode(data);
	//checking whether the list is empty
	if (!list)
		//return the newNode
		return newNode;
	//list is not empty
	newNode->nxt = list;
	list->prev = newNode;
	list = newNode;
	return list;
}
node* addLast(node* list, char data){
	node* newNode = createNode(data);
	if(!list) // list is empty
		return newNode;
	node* temp;
	for(temp=list; temp->nxt;temp=temp->nxt);
	temp->nxt = newNode;
	newNode->prev = temp;
	return list;	
}
node* addAt(node* list, char data, int pos){
	if (pos ==0 || pos == 1)
		return addFirst(list, data);
	if (list && list->nxt){
		node* temp = list;
		for (int i = 2; temp->nxt && i++<pos;temp=temp->nxt);
		if(temp->nxt){
			node* newNode = createNode(data);
			newNode->nxt = temp->nxt;
			temp->nxt->prev = newNode;
			newNode->prev = temp;
			temp->nxt = newNode;
		}
	}
	return list;
}
void printList(node* list){
	printf("Forward Traversal\n");
	printf("[");
	node* temp;
	for (temp=list; temp->nxt; temp=temp->nxt)
		printf("'%c',",temp->element);
	printf("'%c']\n", temp->element);
	printf("Reverse Traversal\n");	
	printf("['%c',", temp->element);
	for (temp=temp->prev;temp->prev; temp = temp->prev)
		printf("'%c',",temp->element);
	printf("'%c']", temp->element);		
}

int main(){
	node* root = NULL;
	root = addFirst(root, 'I');
	root = addFirst(root, 'A');
	root = addFirst(root, 'S');
	root = addFirst(root, 'A');
	root = addFirst(root, 'A');
	root = addLast(root, 'T');
	root = addLast(root, 'H');
	root = addLast(root, 'A');
	root = addLast(root, 'M');
	root = addLast(root, 'B');
	root = addLast(root, 'I');
	root = addAt(root, 'J', 0);
	root = addAt(root, 'A', 2);
	root = addAt(root, 'Y', 3);
	root = addAt(root, '.', 15);
	printList(root);
	return 0;
}