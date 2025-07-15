#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode{
	int data;
	struct TreeNode *node1;
	struct TreeNode *node2;
	struct TreeNode *node3;
}tnode;

node* createNode(int data){
	tnode* temp = (tnode*)calloc(1, sizeof(tnode));
	temp->data = data;
	return temp;
}

int main(){
	tnode* root = NULL;
	root = createNode(10);
	root->node1 = createNode(20);	
	root->node2 = createNode(30);
	root->node3 = createNode(30);
	root->node1->node1 = createNode(40);	
	return 0;
}