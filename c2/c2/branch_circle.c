#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//选择结构
/*
   分支语句
   if(表达式)
      语句;

    if()
      语句1;
    else
      语句2; 

    if()
      语句1;
    else if
      语句2;
    else
      语句3;
*/

//int main()
//{
//    int age;
//    printf("请输入年龄：");
//    scanf("%d", &age);
//    if (age < 18)
//    {
//        printf("未成年！\n");
//        printf("不能谈恋爱！\n");
//    }    
//    else if (age >= 18 && age < 60)
//    {
//        printf("年轻人！\n");
//        printf("可以谈一谈！\n");
//    }
//    else
//    {
//        printf("老年人！\n");
//        printf("有点晚了！\n");
//    }
//    return 0;
//}

//int main()
//{
//    int num = 9;
//    if (6 == num)      //数字和变量比较，数字放左边
//        printf("hhh");
//    return 0;
//}

//判断一个数是否是奇数
//int main()
//{
//    int num;
//    printf("输入一个整数：");
//    scanf("%d", &num);
//    if (0 != num % 2)
//        printf("是奇数");
//    else
//        printf("不是奇数");
//    return 0;
//}

//输出1-100之间的奇数
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

//分支语句
/*
    switch(整型表达式)
    {
        case 整型常量表达式1:
            语句1;
            break;
        case 整型常量表达式2:
            语句2;
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
//        printf("星期一");
//        break;
//    case 2:
//        printf("星期二");
//        break;
//    case 3:
//        printf("星期三");
//        break;
//    case 4:
//        printf("星期四");
//        break;
//    case 5:
//        printf("星期五");
//        break;
//    case 6:
//        printf("星期六");
//        break;
//    case 7:
//        printf("星期日");
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
//        printf("工作日！");
//        break;
//    case 6:
//    case 7:
//        printf("休息日！");
//        break;
//    default:
//        printf("输入错误！");
//        break;
//    }
//    return 0;
//}

//循环语句
/*  0假，非0为真
    while(表达式)
        循环语句;
    break在while循环中的作用：循环中只要遇到break，就停止后期所有的循环，直接终止循环。永久终止循环。
    continue在while循环中的作用：用于终止本次循环，也就是本次循环中continue后面的代码不会再执行，而是直接跳转到while语句的判断部分，进行下一次循环的入口判断

    for(表达式1;表达式2;表达式3)
        循环语句; 
    不要在循环体内部改变循环变量，防止循环失去控制；
    建议for语句的循环控制变量的取值采用“前闭后开区间”写法

    do 
        循环语句;    循环语句至少执行一次
    while(表达式);
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
//    int ch = 0;         //获getchar()取键盘输入字符
//    while ((ch = getchar()) != EOF)    //ctrl + z  停止
//    {   //EOF -- end of file  本质值是-1
//        putchar(ch);       //输出
//    }    
//    return 0;
//}

//使用价值 getchar()
//int main()
//{
//    int ret = 0;
//    int ch=0;
//    char password[20] = { 0 };
//    printf("请输入密码：>");
//    scanf("%s", password);   //输入密码，存放在password中
//    //缓冲区还剩下一个\n
//    //读取剩余的\n
//    while (ch = getchar() != '\n')
//    {
//        ;     //空语句
//    }
//    printf("请确认（Y/N）：>");
//    ret = getchar();  //Y/N
//    if (ret == 'Y')
//    {
//        printf("确认成功");
//    }
//    else
//    {
//        printf("放弃确认");
//    }
//    return 0;
//}
 //输入1-9则打印输出，否则不打印
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
//} //死循环

//计算n的阶乘
//int main()
//{
//    int n=0;
//    int ret=1;
//    printf("输入n：");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d的阶乘等于%d\n", n, ret);
//    return 0;
//}

// 计算1！+2！+3！+。。。+3！
//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    printf("输入n：");
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
//    printf("阶乘之和为：%d", sum);
//    return 0;
//
//}

//int main()
//{
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    printf("输入n：");
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//        sum += ret;
//    }
//    printf("阶乘之和为：%d", sum);
//    return 0;
//}

//在一个有序数组中查找某个具体的数字n。编写int binsearch(int x,int v[],int n)：在v[0]<=v[1]...<=v[n-1]的数组中查找x
//一个一个找
//int binsearch(int x, int v[], int n)
//{   
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (x == v[i])
//        {
//            printf("Get it！,下标：%d",i);
//            break;
//        }
//        
//    }
//    if(i>=n)
//            printf("Not find！");
//}

//折半查找
//int binsearch(int x, int v[], int n)
//{
//    int left = 0; //左下标
//    int right = n - 1;  //右下标
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
//            printf("Get it! location：%d\n", mid+1);
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
//    //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;  末尾有个\0
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(700);  //休息1s
//        system("cls");  //执行系统命令的一个函数--cls清空屏幕
//        left++;
//        right--;
//    }
//    printf("%s\n", arr2);
//    return 0;
//}

//模拟用户登录情景，并且只能登录三次。(只允许输入三次密码，如果密码正确则提示登录成功，如果三次均错误，则推出程序)
int main()
{
    int i = 0;
    char password[20] = { 0 };
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码：");
        scanf("%s", password);
        if (strcmp(password,"123456")==0)   //等号不能够用于判断两个字符是否相等，应使用库函数-strcmp
        {
            printf("登录成功！\n");
            break;
        }
        else
            printf("密码错误。\n");
    }
    if (i == 3)
        printf("三次输入密码均错误，退出程序");
    return 0;

}