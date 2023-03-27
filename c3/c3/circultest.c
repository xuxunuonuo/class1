#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

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
// 	int max = arr[0];
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

//猜数字游戏:1.电脑随机生成一个随机数 2.猜数字
//int main()
//{
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	num = rand() % 21;
//	int posit = 0;
//	printf("猜测数字为：");
//	scanf("%d", &posit);
//	while (posit != num)
//	{
//		if (posit > num)
//		{
//			printf("您猜测的数字比正确数字大！再试试吧\n");
//			printf("猜测数字为：");
//			scanf("%d", &posit);
//		}
//		else
//		{
//			printf("您猜测的数字比正确数字小！再试试吧\n");
//			printf("猜测数字为：");
//			scanf("%d", &posit);
//		}
//	}
//	if (posit == num)
//	{
//		printf("恭喜你！猜对了\n");
//	}
//	printf("正确数字：%d", num);
//	return 0;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1.play     0.exit  ****\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	//1.生成随机数
//	//2.猜数字
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 101;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了！再试试吧\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了！再试试吧\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();    //猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto 语句
/*
	 c语言提供了可以随意滥用的goto语句和标记跳转的符号
	 但从理论上讲，goto语句是没有必要的，实践中没有goto语句也可以很容易写出代码

	 常见用法：终止程序在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环。
*/

//int main()
//{
//	//shutdown -s -t 60  60s内关机
//	//system()  执行系统命令的语句
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，输入：我是猪，取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

