#include <stdio.h>
//#include <math.h>



//double pow(double a, double b);//a의b승을 반환

//double sqrt(double x);//루트x를 반환


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




