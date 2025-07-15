#include <stdio.h>
#include <stdlib.h>
//Binary tree traversal demo
typedef struct BinaryTreeNode{
	struct BinaryTreeNode *left;
	short int element;
	struct BinaryTreeNode *right;
}bnode;

bnode* createNode(short int data){
	bnode* temp =(bnode*) calloc(1, sizeof(bnode));
	temp->element = data;
	return temp;	
}
//Tree Traversal
void preorder(bnode* root){
	/*
	1. Visit the root node
	2. Traverse LST
	3. Traverse RST
	*/
	if(root){
		printf("%d ", root->element);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(bnode *root){
	/*
	1. Traverse LST
	2. Traverse RST
	3. Visit the root node
	*/
	//Tree is not NULL
	if (root){
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->element);
	}
}

void inorder(bnode *root){
	/*
	1. Traverse LST
	2. Visit the root node
	3. Traverse RST
	*/
	if (root){
		inorder(root->left);
		printf("%d ", root->element);
		inorder(root->right);
	}
}
int main(){
	bnode* root = NULL;
	root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	root->right->left->right= createNode(8);
	printf("\nPreorder Traversal  : [");
	preorder(root);
	printf("]");
	printf("\nPostorder Traversal : [");
	postorder(root);
	printf("]");
	printf("\nInorder Traversal   : [");
	inorder(root);
	printf("]");
	
	return 0;
}

//inoder --> 42516837
//preorder --> 12453687
//postprder --> 45286731









