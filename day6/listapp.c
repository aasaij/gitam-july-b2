#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    char element;
    struct Node *nxt;
}node;
node *createNode(char data){
    node *temp = (node*)calloc(1, sizeof(node));
    temp->element = data;
    return temp;
}
node*addFirst(node* root, char data){
	node* newNode = createNode(data);
	newNode->nxt = root;
	root = newNode;
	return root;
}
node* addLast(node* root, char data){
	node* newNode = createNode(data);
	if(root){
		node* temp= root;
		while(temp->nxt) temp = temp->nxt;
		temp->nxt = newNode;
	}
	else
		root = newNode;
	return root;
}
node* addAt(node* root, char data, int loc){
	if (loc <=1)
		return addFirst(root, data);
	node* newNode = createNode(data);
	node* temp=root;
	for(int i = 2;temp->nxt && i++<loc ;temp = temp->nxt);
	if (temp->nxt){
		newNode->nxt = temp->nxt;	
	}
	temp->nxt = newNode;
	return root;
}
node* deleteFirst(node* root){
	if (root){//checking whether the list is not empty
		//checking whether the list contains only one node or not
		if (!root->nxt){
			free(root);
			return NULL;
		}
		//list contains more than one node
		node* temp = root;
		root = temp->nxt;
		free(temp);
	}	
	return root;
}
node* deleteAt(node* root, int loc){
	if(loc <=1)
		return deleteFirst(root);
	if(root && root->nxt){
		node* temp = root;
		for (int i = 2; temp->nxt && i++<loc; temp=temp->nxt);
		if(temp->nxt){
			node* t1 = temp->nxt;
			temp->nxt = t1->nxt;
			free(t1);	
		}
	}
	return root;
}
node* deleteLast(node* root){
	if (root){
		if (!root->nxt){
			free(root);
			return NULL;
		}
		node* temp;
		for (temp=root; temp->nxt->nxt; temp=temp->nxt);
		free(temp->nxt);
		temp->nxt = NULL;
	}
	return root;
}
void printList(node* root){
	if(root){
		printf("\n[");
		for (;root->nxt; root=root->nxt)
			printf("'%c',", root->element);
		printf("'%c']\n", root->element);
	}
	else
		printf("\n[]\n");	
}
int main(){
    node* root = NULL;
    root = addFirst(root, 'A');
    root = addFirst(root, 'B');
    root = addFirst(root, 'C');
    root = addLast(root, 'D');
    root = addLast(root, 'E');
    root = addAt(root, 'F', 0);
    root = addAt(root, 'G',7);
    root = addAt(root, 'J', 4); // F C B J A D E G
//    root = deleteFirst(root);
	root = deleteAt(root, 0);
	root = deleteAt(root, 9);
	root = deleteAt(root, 5); // C B J A E G
    printList(root);
    return 0;
}