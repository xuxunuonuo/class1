#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


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
//	int max = arr[0];
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

