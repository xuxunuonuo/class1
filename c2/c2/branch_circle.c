#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//ѡ��ṹ
/*
   ��֧���
   if(���ʽ)
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
    switch(���ͱ��ʽ)
    {
        case ���ͳ������ʽ1:
            ���1;
            break;
        case ���ͳ������ʽ2:
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
/*  0�٣���0Ϊ��
    while(���ʽ)
        ѭ�����;
    break��whileѭ���е����ã�ѭ����ֻҪ����break����ֹͣ�������е�ѭ����ֱ����ֹѭ����������ֹѭ����
    continue��whileѭ���е����ã�������ֹ����ѭ����Ҳ���Ǳ���ѭ����continue����Ĵ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�

    for(���ʽ1;���ʽ2;���ʽ3)
        ѭ�����; 
    ��Ҫ��ѭ�����ڲ��ı�ѭ����������ֹѭ��ʧȥ���ƣ�
    ����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��

    do 
        ѭ�����;    ѭ���������ִ��һ��
    while(���ʽ);
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

//int main()
//{
//    for (int i = 1; i <= 10; i++) 
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;
//}

//int main()
//{
//    int i = 1;
//    do
//    {
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}

//int main()
//{
//    int ch = 0;         //��getchar()ȡ���������ַ�
//    while ((ch = getchar()) != EOF)    //ctrl + z  ֹͣ
//    {   //EOF -- end of file  ����ֵ��-1
//        putchar(ch);       //���
//    }    
//    return 0;
//}

//ʹ�ü�ֵ getchar()
//int main()
//{
//    int ret = 0;
//    int ch=0;
//    char password[20] = { 0 };
//    printf("���������룺>");
//    scanf("%s", password);   //�������룬�����password��
//    //��������ʣ��һ��\n
//    //��ȡʣ���\n
//    while (ch = getchar() != '\n')
//    {
//        ;     //�����
//    }
//    printf("��ȷ�ϣ�Y/N����>");
//    ret = getchar();  //Y/N
//    if (ret == 'Y')
//    {
//        printf("ȷ�ϳɹ�");
//    }
//    else
//    {
//        printf("����ȷ��");
//    }
//    return 0;
//}
 //����1-9���ӡ��������򲻴�ӡ
//int main()
//{
//    int ch=0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch < '0' || ch>'9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}

//int main()
//{
//    for (;;)
//    {
//        printf("hahaha");
//    }
//    return 0;
//} //��ѭ��

//����n�Ľ׳�
//int main()
//{
//    int n=0;
//    int ret=1;
//    printf("����n��");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d�Ľ׳˵���%d\n", n, ret);
//    return 0;
//}

// ����1��+2��+3��+������+3��
//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    printf("����n��");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        ret = 1;
//        for (int j = 1; j <= i; j++)
//        {
//            ret = ret * j;
//        }
//        sum += ret;
//    }
//    printf("�׳�֮��Ϊ��%d", sum);
//    return 0;
//
//}

//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    printf("����n��");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//        sum += ret;
//    }
//    printf("�׳�֮��Ϊ��%d", sum);
//    return 0;
//}

//��һ�����������в���ĳ�����������n����дint binsearch(int x,int v[],int n)����v[0]<=v[1]...<=v[n-1]�������в���x
//һ��һ����
//int binsearch(int x, int v[], int n)
//{   
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (x == v[i])
//        {
//            printf("Get it��,�±꣺%d",i);
//            break;
//        }
//        
//    }
//    if(i>=n)
//            printf("Not find��");
//}

//�۰����
//int binsearch(int x, int v[], int n)
//{
//    int left = 0; //���±�
//    int right = n - 1;  //���±�
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (v[mid] > x)
//        {
//            right = mid - 1;
//        }
//        else if (v[mid] < x)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            printf("Get it! location��%d\n", mid+1);
//            break;
//        }
//    }
//    if(left>right)
//        printf("Not find!");
//    
//    return 0;
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,6,7,10 };
//    int k = 10;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    binsearch(k, arr, sz);
//    return 0;
//}

//int main()
//{
//    char arr1[] = "Welcome to bit!!!";
//    char arr2[] = "#################";
//    int left = 0;
//    //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;  ĩβ�и�\0
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(700);  //��Ϣ1s
//        system("cls");  //ִ��ϵͳ�����һ������--cls�����Ļ
//        left++;
//        right--;
//    }
//    printf("%s\n", arr2);
//    return 0;
//}

//ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�(ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ��������Ƴ�����)
int main()
{
    int i = 0;
    char password[20] = { 0 };
    for (i = 0; i < 3; i++)
    {
        printf("���������룺");
        scanf("%s", password);
        if (strcmp(password,"123456")==0)   //�ȺŲ��ܹ������ж������ַ��Ƿ���ȣ�Ӧʹ�ÿ⺯��-strcmp
        {
            printf("��¼�ɹ���\n");
            break;
        }
        else
            printf("�������\n");
    }
    if (i == 3)
        printf("������������������˳�����");
    return 0;

}