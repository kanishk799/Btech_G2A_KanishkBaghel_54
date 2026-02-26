#include <stdio.h>
long long factorial(int n )
{
    long long fact = 1;
    for( int i = 1; i<= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num );

    printf("Factorial of %d = %11d" , num, factorial(num));
    return 0;
}
