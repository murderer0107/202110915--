#include <stdio.h>

int main(void)
{
	float num1;
	printf("Please enter kilometer: ");
	scanf("%f", &num1);    //ų�ι��� �Է�
	float mile = num1 / 1.609;
	printf("%f km is equal to %.1f ", num1, mile);
}