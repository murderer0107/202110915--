#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);    //ù��° ���� �Է�
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf("%d", &num2);    //�ι�° ���� �Է�
	int numand = num1 & num2;
	int numor = num1 | num2;
	int numxor = num1 ^ num2;
	printf("�� ������ AND���� %d �Դϴ�. \n", numand);
	printf("�� ������ OR���� %d �Դϴ�. \n", numor);
	printf("�� ������ XOR���� %d �Դϴ�. \n", numxor);
}