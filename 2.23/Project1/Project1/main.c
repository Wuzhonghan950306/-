// (Largest and Smallest Integers) �{��
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("�п�J �Ĥ@�� ���: ");
	scanf("%d", &num1);

	printf("�п�J �ĤG�� ���: ");
	scanf("%d", &num2);

	printf("�п�J �ĤT�� ���: ");
	scanf("%d", &num3);

	if (num1 < num2) {
		num1 = num1 ^ num2;
		num2 = num1 ^ num2;
		num1 = num1 ^ num2;
	}
	if (num1 < num3) {
		num1 = num1 ^ num3;
		num3 = num1 ^ num3;
		num1 = num1 ^ num3;
	}
	if (num2 < num3) {
		num2 = num2 ^ num3;
		num3 = num2 ^ num3;
		num2 = num2 ^ num3;
	}
	printf("�̤j�ƭ�: ");
	printf("%d\n",num1);
	printf("�̤p�ƭ�: ");
	printf("%d\n",num3);
	system("pause");
	return 0;
}