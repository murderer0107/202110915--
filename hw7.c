#include <stdio.h>
//#include <math.h>



//double pow(double a, double b);//a��b���� ��ȯ

//double sqrt(double x);//��Ʈx�� ��ȯ


int num(void) {

	int arr[5];
	int sum = 0;
	int i;

	for (i = 0; i < 5; i++) {
		scanf("%s",&arr[i]);
		sum += arr[i];
	}

	printf("%d", sum);

}




