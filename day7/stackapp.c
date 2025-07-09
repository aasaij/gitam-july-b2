//Program to implement stacks
#include <stdio.h>
#include <stdlib.h>
#include "mystack.h"

//Main function
int main()
{
    int max;
    stack *app;
    printf("Enter stack size: ");
    scanf("%d", &max);
    app = createStack(max);
    while(1)
    {
        int choice;
        mainMenu();
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            if(push(app,*getBook()))
                printf("Pushed...\n");
            else
                printf("Stack overflow..\n");
            break;
        case 2:
		{	
        	book *b = pop(app);
        	if (b){
        		printf("Removed Element :\n");
        		printBook(*b);
        	}
        	else
        		printf("Stack is empty!\n");
        	break;
    	}
        case 3:{
        	book *b = peek(app);
        	if (b)
        		printBook(*b);
        	else
        		printf("Stack is empty!\n");
        	break;
    	}
        case 4:
        	printf("\nThank you so much for being very interactive!");
        	exit(0);
        default:
        	printf("Invalid choice\n");	
        }//switch
    }//while
    return 0;
}