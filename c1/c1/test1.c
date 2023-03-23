#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>    //调用库函数时

//int main()    //主函数----程序的入口
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



//打印
/*
     %d  --整型
     %c  --字符
     %f  --小数
     %p  --以地址的形式打印
     %x  --打印十六进制
*/



/*
数据类型
char     字符类型    char ch = 'A';
short    短整型
int      整型    int age = 20;
long     长整型
long long    更长的整型
float        单精度浮点数
double       双精度浮点数
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

 //常量  变量
/*
   变量
       全局变量---定义在代码块{}之外的变量
       局部变量---定义在代码块{}之内的变量
       局部变量和全局变量名字尽量不要相同，当相同时，局部变量优先
*/

//int num = 10;
//int main()
//{
//    int num = 20;
//    printf("%d\n", num);
//    return 0;
//}   //----输出20

//int main()
//{
//    //计算两个数的和
//    int num1, num2;
//    scanf("%d%d", &num1, &num2);
//    int sum = num1 + num2;
//    printf("sum=%d", sum);
//    return 0;
//}

//变量的作用域和生命周期
/*
    全局变量的作用域是整个工程
    局部变量的作用域是变量所在的局部范围

    生命周期
    全局变量：整个程序的生命周期
    局部变量：进入作用域生命周期开始，出作用域生命周期结束
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//常量
/*
    1.字面常量   ---3，100
    2.const修饰的常变量  ---const int num=8  ,num此时为常变量,具有常属性，实际是变量
    3.#define定义的标识符常量  ---#define MAX 10
    4.枚举常量  ---性别：男、女
       关键字--enum
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


//字符串
//int main()
//{
//    char arr1[] = "abc";    //数组   存放了'a','b','c','\0'  --字符串的结束标志
//    char arr2[] = { 'a','b','c' }; //abc烫烫烫烫烫   存放的'a','b','c'
//    char arr3[] = { 'a','b','c',0 };  //abc
//    char arr4[] = { 'a','b','c','0' };  //abc0烫烫烫烫烫
//    char arr5[] = { 'a','b','c','\0'};  //abc  \0的ASCII值为0
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

//转义字符
/*
    \?:在书写连续多个问号时使用，防止他们被解析成三字母词
    \':用于表示字符常量'
    \":用于表示一个字符串内部的双引号
    \\:用于表示一个反斜杠，防止它被解释为一个转义序列符
    \a:警告字符，蜂鸣
    \b:退格符
    \f:进纸符
    \n:换行
    \r:回车
    \t:水平制表符
    \v:垂直制表符
    \ddd:ddd表示1-3个八进制的数字，如：\130
    \xdd:dd表示2个十六进制的数字，如：\x30
*/

//int main()
//{
//    printf("%d\n", strlen("c:\test\32\test.c"));  //  输出13，因为此时32是2个八进制数字，\32表示32作为八进制代表的十进制数，作为ascii码值，对应的字符
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
//        printf("敲一行代码，(此时是第%d行)\n", line);    
//    }
//    printf("拿到好offer！");
//}

//函数
/*
    库函数
    自定义函数
*/

