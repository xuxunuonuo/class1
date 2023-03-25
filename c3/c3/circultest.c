#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为：%d\n", b);
//	return 0;
//}

//输入三个数，从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a放最大值，b放中间值，c最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d  %d  %d\n", a, b, c);
//	return 0;
//}

//求素数  --------->  ???

//输出十个数的最大值
//int main()
//{
//	int arr[] = { -1,2,3,-3,3,4,-5,7 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("最大值：%d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);     //两位整数，左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

