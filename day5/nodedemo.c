#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
	char element;
	struct Node *ptr;
}node;

int main(){
	node *root;
	root = (node*)calloc(1, sizeof(node));
	return 0;
}