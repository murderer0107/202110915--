#include <stdio.h>

int main(void) {
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("5개의 정수를 입력하세요:");
		scanf("%d", &arr[i]);
	}

	printf("짝수 출력:");
	for (i = 0; i < 5; i++)
		if ((arr[i] % 2) == 0)
			printf(" %d", arr[i]);

	printf("\n홀수 출력:");
	for (i = 0; i < 5; i++)
		if ((arr[i] % 2) != 0)
			printf(" %d", arr[i]);

}