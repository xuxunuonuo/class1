#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//���Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("���Լ��Ϊ��%d\n", b);
//	return 0;
//}

//�������������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//a�����ֵ��b���м�ֵ��c��Сֵ
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

//������  --------->  ???

//���ʮ���������ֵ
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
//	printf("���ֵ��%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);     //��λ�����������
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ:1.�����������һ������� 2.������
//int main()
//{
//	int num = 0;
//	srand((unsigned int)time(NULL));
//	num = rand() % 21;
//	int posit = 0;
//	printf("�²�����Ϊ��");
//	scanf("%d", &posit);
//	while (posit != num)
//	{
//		if (posit > num)
//		{
//			printf("���²�����ֱ���ȷ���ִ������԰�\n");
//			printf("�²�����Ϊ��");
//			scanf("%d", &posit);
//		}
//		else
//		{
//			printf("���²�����ֱ���ȷ����С�������԰�\n");
//			printf("�²�����Ϊ��");
//			scanf("%d", &posit);
//		}
//	}
//	if (posit == num)
//	{
//		printf("��ϲ�㣡�¶���\n");
//	}
//	printf("��ȷ���֣�%d", num);
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
//	//1.���������
//	//2.������
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 101;
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��ˣ������԰�\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С�ˣ������԰�\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();    //��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//goto ���
/*
	 c�����ṩ�˿����������õ�goto���ͱ����ת�ķ���
	 ���������Ͻ���goto�����û�б�Ҫ�ģ�ʵ����û��goto���Ҳ���Ժ�����д������

	 �����÷�����ֹ������ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ����
*/

//int main()
//{
//	//shutdown -s -t 60  60s�ڹػ�
//	//system()  ִ��ϵͳ��������
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ������룺������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

