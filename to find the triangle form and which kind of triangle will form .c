#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of first side");
    scanf(" %d",&a);
    printf("enter the value of second side");
    scanf(" %d",&b);
    printf("enter the value of third side");
    scanf(" %d",&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        printf("tringle can be form");
    }
    if((a==b)&&(b!=c)||(b==c)&&(a!=b))
    {
        printf("\nthe triangle is isosacle triangle");
    }
    if ((a==b)&&(b==c))
    { 
    printf("\nthe triangle is equilateral");
    }
    else
    {
    printf("\n the triangle is scalar triangle");
    }
    return 0;
}
