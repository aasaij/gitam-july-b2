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
int main(){
    node *x, *y, *z;
    x = createNode('A');
    y = createNode('B');
    z = createNode('C');
    x->nxt = y;
    y->nxt = z;
    printf("%c", x->nxt->nxt->element);
    return 0;
}