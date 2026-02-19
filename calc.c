#include <stdio.h>
int main()
{
    int a, b, r;
    char op;
    printf("enter two no.s");
    scanf( " %d %d", &a, &b);
    printf("enter any operator \n");
    scanf( " %c", &op);
    switch(op)
    {
        case'+' : r=a+b;
        printf("addition %d", r);
        break;
        case'-' : r=a-b;
        printf("subtraction %d", r);
        break;
        case'*' : r=a*b;
        printf("multiplication %d", r);
        break;
        case'/' : r=a/b;
        printf("division %d", r);
        break;
        default: printf("wrong choice");
    }
    return 0;
}






