#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &num1);    //첫번째 정수 입력
	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &num2);    //두번째 정수 입력
	int numand = num1 & num2;
	int numor = num1 | num2;
	int numxor = num1 ^ num2;
	printf("두 정수의 AND값은 %d 입니다. \n", numand);
	printf("두 정수의 OR값은 %d 입니다. \n", numor);
	printf("두 정수의 XOR값은 %d 입니다. \n", numxor);
}