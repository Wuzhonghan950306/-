// (Largest and Smallest Integers) 程式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("請輸入 第一個 整數: ");
	scanf("%d", &num1);

	printf("請輸入 第二個 整數: ");
	scanf("%d", &num2);

	printf("請輸入 第三個 整數: ");
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
	printf("最大數值: ");
	printf("%d\n",num1);
	printf("最小數值: ");
	printf("%d\n",num3);
	system("pause");
	return 0;
}