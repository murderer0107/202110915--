#include <stdio.h>

struct info {
	char name[20];
	char country[20];
	int population;
};

int main(void) 
{
	int j;
	for (j = 0; j < 3; j++) {
	struct info arr[3];
	int i;
		for (i = 0; i < 3; i++) {
			printf("Name:");
			scanf_s("%s", arr[i].name, sizeof(arr[i].name));
			printf("Country:");
			scanf_s("%s", arr[i].country, sizeof(arr[i].country));
			printf("Population:");
			scanf_s("%s", arr[i].population);
		}
		for (i = 0; i < 3; i++)
		{
			printf("Name: %s \n", arr[i].name);
			printf("Country: %s \n", arr[i].country);
			printf("Population: %s \n", arr[i].population);
		};
	}
}