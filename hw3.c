#include <stdio.h>
int main(void)
{
    int a, num1;
    printf("Please enter a number: ");
    scanf("%d", &num1);    //확인할 숫자 입력
    for (a = 2; a < num1; a++)
    {
        if (num1 % a == 0)
        {
            printf("It is not a prime number.");
            return 0;
        }
    }
    if (num1 == 1)
    {
        printf("It is not a prime number.");
    }
    else
        printf("It is a prime number.");
}