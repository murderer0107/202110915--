#include <stdio.h>

int main(void) {
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("5���� ������ �Է��ϼ���:");
		scanf("%d", &arr[i]);
	}

	printf("¦�� ���:");
	for (i = 0; i < 5; i++)
		if ((arr[i] % 2) == 0)
			printf(" %d", arr[i]);

	printf("\nȦ�� ���:");
	for (i = 0; i < 5; i++)
		if ((arr[i] % 2) != 0)
			printf(" %d", arr[i]);

}