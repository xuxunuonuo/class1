#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ѡ��ṹ
/*
   ��֧���
   if(����ʽ)
      ���;

    if()
      ���1;
    else
      ���2; 

    if()
      ���1;
    else if
      ���2;
    else
      ���3;
*/

//int main()
//{
//    int age;
//    printf("���������䣺");
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("δ���꣡\n");
//        printf("����̸������\n");
//    }    
//    else if (age >= 18 && age < 60)
//    {
//        printf("�����ˣ�\n");
//        printf("����̸һ̸��\n");
//    }
//    else
//    {
//        printf("�����ˣ�\n");
//        printf("�е����ˣ�\n");
//    }
//    return 0;
//}

//int main()
//{
//    int num = 9;
//    if (6 == num)      //���ֺͱ����Ƚϣ����ַ����
//        printf("hhh");
//    return 0;
//}

//�ж�һ�����Ƿ�������
//int main()
//{
//    int num;
//    printf("����һ��������");
//    scanf("%d", &num);
//    if (0 != num % 2)
//        printf("������");
//    else
//        printf("��������");
//    return 0;
//}

//���1-100֮�������
//int main()
//{
//    int i = 0;
//    for (int num=1;num <= 100;num++)
//    {
//        if (num % 2 == 1)
//        {
//            printf("%d\t", num);
//            i++; 
//            if (i % 10 == 0)
//                printf("\n");
//        }   
//    }
//    return 0;
//}

//��֧���
/*
    switch(���ͱ���ʽ)
    {
        case ���ͳ�������ʽ1:
            ���1;
            break;
        case ���ͳ�������ʽ2:
            ���2;
            break;
    }
*/
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("����һ");
//        break;
//    case 2:
//        printf("���ڶ�");
//        break;
//    case 3:
//        printf("������");
//        break;
//    case 4:
//        printf("������");
//        break;
//    case 5:
//        printf("������");
//        break;
//    case 6:
//        printf("������");
//        break;
//    case 7:
//        printf("������");
//        break;
//    }
//    return 0;
//}

//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("�����գ�");
//        break;
//    case 6:
//    case 7:
//        printf("��Ϣ�գ�");
//        break;
//    default:
//        printf("�������");
//        break;
//    }
//    return 0;
//}

//ѭ�����
/*
    while(����ʽ)
        ѭ�����;
    break��whileѭ���е����ã�ѭ����ֻҪ����break����ֹͣ�������е�ѭ����ֱ����ֹѭ����������ֹѭ����
    continue��whileѭ���е����ã�������ֹ����ѭ����Ҳ���Ǳ���ѭ����continue����Ĵ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�

    for(����ʽ)
        ѭ�����;

    do while
*/

//int main()
//{  
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}

int main()
{
    int ch = 0;         //��getchar()ȡ���������ַ�
    while ((ch = getchar()) != EOF)    //ctrl + z  ֹͣ
    {   //EOF -- end of file  ����ֵ��-1
        putchar(ch);       //���
    }    
    return 0;
}