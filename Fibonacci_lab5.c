#include <stdio.h>

int iterFibonacci(int n)
{
    int n1 = 0, n2 = 1, n3, i;
    printf("\n%d%d",n1,n2); //printing 0 and 1

    for(i = 2; i < n; ++i)//loop starts from 2 because 0 and 1 already printed
    {
        n3 = n1 + n2;
        printf("%d",n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}

int recFibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;

    printf("\n%d %d",n1,n2);

    if(n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d",n3);
        recFibonacci(n-1);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Fibonacci series");
    recFibonacci(n); //n-2 because 2 numbers are already printed
    iterFibonacci(n);
    return 0;
}