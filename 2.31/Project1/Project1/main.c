// (Table of Squares Cubes) 程式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%-8s%-8s%-8s\n", "number", "square", "cube"); // 打印 number square cube 標題且換到下一行

	for (int i = 0; i <= 10; i++)
	{
		int num;		// 儲存 number
		int square_num; // 儲存 number 平方的結果
		int cube_num;	// 儲存 number 立方的結果

		num = i;
		square_num = i * i;
		cube_num = i * i * i;

		printf("%-8d", num);		// 打印 number (數值向左對齊，位數不足補空白)
		printf("%-8d", square_num); // 打印平方的 number
		printf("%-8d\n", cube_num); // 打印立方的 number 且換到下一行
	}

	system("pause");
	return 0;
}