#include <stdio.h>
#include <stdlib.h>
typedef struct BinaryTreeNode{
	struct BinaryTreeNode *left;
	char element;
	struct BinaryTreeNode *right;
}BTNode;

BTNode* createNode(char data){
	BTNode* temp =(BTNode*) calloc(1, sizeof(BTNode));
	temp->element = data;
	return temp;	
}

int main(){
	BTNode* root = NULL;
	root = createNode('A');
	root->left = createNode('B');
	root->right = createNode('C');
	root->left->left = createNode('D');
	root->left->right = createNode('E');
	root->right->right = createNode('F');
	
	return 0;
}

//Tree Traversal  --> DFS --> Depth First Search
//Inorder
//preorder
//postorder

Stack

//level --> BFS  --> Breadth First Search

Queue
