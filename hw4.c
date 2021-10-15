#include <stdio.h>
#pragma warning(disable:4996)

int Change(int n);

int main(void)
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number); 
    Change(number);

    return 0;
}



int Change(int n)
{
    if (n == 0 || n == 1)
        printf(" % d", n);

    else
    {
        Change(n / 2);
        printf("%d", n % 2);
    }
    return 0;
}