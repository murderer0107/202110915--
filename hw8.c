#include <stdio.h>

int main(void)
{

	int i, len;
	char str[256];

	printf("���ڿ��� �Է��ϼ���.");
	scanf("%s", str);
	len = str;

	for (i = 0; i < strlen(str); i++) {

		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;

		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	printf("%s", str);


}