#include <stdio.h>
int add(int x, int y){
    y = 123;
}
int main()
{
    int x = 1000, y = 20;
    int r = add(x,y);
    printf("%d", r);

    return 0;
}
