typedef enum boolean{false , true} boolean; 
//enumerations are used to specify a name to a specified constant
//typedef enum boolean{true=1,false=0} boolean;
typedef struct Book
{
    char title[100];
    int pages;
    double price;
}book; //use case is arranging books on a shelf

//defining a stack
typedef struct stack
{
    int maxSize;
    int size; //actual size
    book *books; //structure inside a structure
    //pointer because we don't know value of stack, dynamic array
}stack;

//creating a stack,n is  max stack size
stack* createStack(int n) //return type is a stack pointer
{
    stack* temp = (stack*)calloc(1,sizeof(stack));
    //initializing members of the stack
    temp-> maxSize =n; //maximum size of stack
    temp-> size =-1; // stack is empty
    //allocating memory to store <n> number of books
    temp->books = (book*)calloc(n,sizeof(book));
    return temp;
}

//checking whether the stack is full or not
boolean isFull(stack *st)
{
    return st->maxSize == st->size+1;
}  
//checking whether the stack is empty or not
boolean isEmpty(stack *st){
	return st->size == -1;
}

//Pushing an element in to the stack
boolean push (stack *st, book element)
{
	//checking whether stack is empty or not
    if(!isFull(st))
    {
    	st->size = st->size+1;
        st->books[st->size] = element;
        return true;
    }
    return false;
}

//pop operation
book* pop(stack *st)
{
    if(!isEmpty(st))
    {
        return &st->books[(st->size)--];
    }
    return NULL;
}

//peek operation
book* peek(stack *st)
{
    if(!isEmpty(st))
    {
        return &st->books[(st->size)];
    }
    return NULL;
}

//Menu function
void mainMenu() 
{
    printf("\nStack operations demo\n");
    printf("*********************\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");
    printf("4.Exit\n\n");
    printf("Enter your choice: : ");
    
}
//getting book details
book* getBook()
{
    book *b = calloc(1, sizeof(book));
    printf("Book title :");
    scanf("%s",b->title);
    printf("Number of pages :");
    scanf("%d", &b->pages);
    printf("Price :");
    scanf("%lf", &b->price);
    return b;
}

void printBook(book b)
{
    printf("\nBook title      : %s\n",b.title);
    printf("Number of pages : %d\n", b.pages);
    printf("Price           : %.2lf\n", b.price);
}
