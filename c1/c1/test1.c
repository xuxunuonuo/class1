#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>    //���ÿ⺯��ʱ

//int main()    //������----��������
//{
//	char ch = 'A';
//	int age = 22;
//	float f = 5.0;
//	double d = 5.0;
//	printf("hello world\n");
//	printf("%c\n", ch);
//	printf("%d\n", age);
//	printf("%f\n", f);
//	printf("%lf\n", d);
//	return 0;
//}



//��ӡ
/*
     %d  --����
     %c  --�ַ�
     %f  --С��
     %p  --�Ե�ַ����ʽ��ӡ
     %x  --��ӡʮ������
*/



/*
��������
char     �ַ�����    char ch = 'A';
short    ������
int      ����    int age = 20;
long     ������
long long    ����������
float        �����ȸ�����
double       ˫���ȸ�����
*/


//int main()
//{
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    return 0;
//}

 //����  ����
/*
   ����
       ȫ�ֱ���---�����ڴ����{}֮��ı���
       �ֲ�����---�����ڴ����{}֮�ڵı���
       �ֲ�������ȫ�ֱ������־�����Ҫ��ͬ������ͬʱ���ֲ���������
*/

//int num = 10;
//int main()
//{
//    int num = 20;
//    printf("%d\n", num);
//    return 0;
//}   //----���20

//int main()
//{
//    //�����������ĺ�
//    int num1, num2;
//    scanf("%d%d", &num1, &num2);
//    int sum = num1 + num2;
//    printf("sum=%d", sum);
//    return 0;
//}

//���������������������
/*
    ȫ�ֱ���������������������
    �ֲ��������������Ǳ������ڵľֲ���Χ

    ��������
    ȫ�ֱ����������������������
    �ֲ������������������������ڿ�ʼ�����������������ڽ���
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//����
/*
    1.���泣��   ---3��100
    2.const���εĳ�����  ---const int num=8  ,num��ʱΪ������,���г����ԣ�ʵ���Ǳ���
    3.#define����ı�ʶ������  ---#define MAX 10
    4.ö�ٳ���  ---�Ա��С�Ů
       �ؼ���--enum
*/

//enum Sex
//{
//    MALE,
//    FEMALE
//};
//int main()
//{
//    printf("%d\n", MALE);    //  0
//    printf("%d\n", FEMALE);  //  1
//    return 0;
//}


//�ַ���
//int main()
//{
//    char arr1[] = "abc";    //����   �����'a','b','c','\0'  --�ַ����Ľ�����־
//    char arr2[] = { 'a','b','c' }; //abc����������   ��ŵ�'a','b','c'
//    char arr3[] = { 'a','b','c',0 };  //abc
//    char arr4[] = { 'a','b','c','0' };  //abc0����������
//    char arr5[] = { 'a','b','c','\0'};  //abc  \0��ASCIIֵΪ0
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//    printf("%s\n", arr4);
//    printf("%s\n", arr5);
//    return 0;
//}

//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' };
//    printf("%d\n", strlen(arr1));  //3
//    printf("%d\n", strlen(arr2));  //42
//    return 0;
//}

//ת���ַ�
/*
    \?:����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
    \':���ڱ�ʾ�ַ�����'
    \":���ڱ�ʾһ���ַ����ڲ���˫����
    \\:���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
    \a:�����ַ�������
    \b:�˸��
    \f:��ֽ��
    \n:����
    \r:�س�
    \t:ˮƽ�Ʊ��
    \v:��ֱ�Ʊ��
    \ddd:ddd��ʾ1-3���˽��Ƶ����֣��磺\130
    \xdd:dd��ʾ2��ʮ�����Ƶ����֣��磺\x30
*/

//int main()
//{
//    printf("%d\n", strlen("c:\test\32\test.c"));  //  ���13����Ϊ��ʱ32��2���˽������֣�\32��ʾ32��Ϊ�˽��ƴ����ʮ����������Ϊascii��ֵ����Ӧ���ַ�
//    printf("%c\n", '\132');  //z
//    printf("%c\n", '\x61');  //a
//    return 0;
//}

//int main()
//{
//    int line = 0;
//    while (line < 20000)
//    {
//        line++;
//        printf("��һ�д��룬(��ʱ�ǵ�%d��)\n", line);    
//    }
//    printf("�õ���offer��");
//}

//����
/*
    �⺯��
    �Զ��庯��
*/

