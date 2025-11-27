#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>//布尔类型的使用需要包含头文件
#include <stdio.h>
//int main()
//{
//	//_Bool islike = true;
//	bool islike = false;
//	if (islike) {
//		printf("I like C\n");
//	}
//	else {
//		printf("I don't like C\n");
//	}
//	return 0;
//}
//int main()
//{// sizeof计算的值打印，格式应用%zd
//	//单位是字节
//	int a = 100;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);//sizeof的操作数如果是表达式，则可以省略后边的括号
//	printf("%zd\n", sizeof(3 + 5));
//	printf("%zd\n", sizeof 3 + 5);//先计算3的长度是4，+5=9
//	printf("%zd\n", sizeof(int));
//	return 0;
//}
//int main()
//{
//	printf("%zd\n", sizeof(bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(long));// sizeof(long)>=sizeof(int)
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}
//int main()
//{
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));
//	                   short int int
//	printf("s=%d\n", s);//sizeof中表达式不计算
//	return 0;
//}
//signed和unsigned关键字只修饰字符型和整型
//signed表示一个类型带有正负号，包含负值
//unsigned表示该类型不带有正负号，只能表示正整数和0
//int类型默认带有正负号，int等同于signed int
//unsigned变量声明使同样长度的内存能够表示的最大整数值增大了一倍
//unsigned int里int可以省略
//char!=(un)signed char,C语言规定char类型默认是否带有正负号，由当前系统决定
//int main()
//{
//	//data_type name;
//	// 数据类型  变量名
//	int age;
//	int age = 10;//初始化
//	float score = 85.5f;
//	double num = 123.45;
//	char c = 'w';
//变量命名规则：1.只能由字母、数字、下划线组成
//2.不能以数字开头
//3.长度不能超过63个字符
//4.变量名中区分大小写
//5.变量名不能使用关键字
//	return 0;
//}
//int n = 100;
//int main()
//{
//	int n = 10;
//	printf("%d\n", n);
//	return 0;
//}当局部变量与全局变量同名时，优先使用局部变量
//int main()
//{
//	float x = 6 / 4;//C语言中的除法是整数除法是整除，只会返回整数部分，丢失小数部分
//	int y = 6 / 4;
//	printf("%f\n", x);
//	printf("%d\n", y);
//	return 0;
//}
//int main()
//{
//	float x = 6.0/ 4;//两个运算数中必须至少有一个浮点数，才会进行浮点数除法
//	printf("%f\n", x);
//	return 0;
//}
//%求模（余）运算只能用于整数
//int main()
//{
//	printf("%d\n", 11 % -5);
//	printf("%d\n", -11 % -5);
//	printf("%d\n", -11 % 5);
//	return 0;
//}//负数求模结果的正负号由第一个运算数的正负号决定
//int main()
//{
//	int a = 10;
//	a = a - 1;
//	a -= 1;
//	a--;
//	--a;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a--;//后置--：先使用，再-1
//	//b=a,a=a-1
//	//int b = --a;// 前置--：先-1，再使用
//  //a=a-1,b=a
//	printf("a=%d\n", a); 
//	printf("b=%d\n", b);
//	return 0;
//}
//+对正负值没有影响，可以省略
//-用来改变一个值的正负号
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}//强制类型转换
//int main()
//{
//	int ch = getchar();//读取一个字符
//	putchar(ch);//把ch打印在屏幕上
//	return 0;
//}
//int main()
//{
//	printf("%5d\n", 123);//右对齐
//	printf("%-5d\n", 123);//左对齐
//	printf("%+d\n", 12);
//	printf("%+d\n", -12);//总是显示正负号
//	printf("%.2f\n", 12.345);//限定小数位数（四舍五入）
//	printf("%10.2f\n", 123.4567);
//	printf("%*.*f\n", 10, 2, 123.4567);//引入可变参数*
//	printf("%.5s\n", "hello world");//只输出前5个字符
//	return 0;
//}
//int main()
//{
//	int score = 0;
//	printf("请输入成绩:");
//	scanf("%d", &score);//&-取地址操作符
//	printf("成绩是:%d\n", score);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int x = 0.0;
//	int y = 0.0;
//	scanf("%d%d%f%f", &i, &j, &x, &y);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	float y = 0.0;
//	//输入  -13.45e12# 0
//	scanf("%d", &x);//-13
//	printf("%d\n", x);
//	scanf("%f", &y);//.45e12
//	printf("%f\n", y);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0;
//	int r = scanf("%d %d %f",&a,&b,&f);
//	printf("a=%d b=%d f=%f\n", a, b, f);
//	printf("r=%d\n", r); //scanf()的返回值是一个整数，表示成功读取变量的个数
//	return 0;
//}//EOF(-1) end of file 文件结束标志
//ctrl+z，就会让scanf函数读取失败
//int main()
//{
//	char ch = 0;
//	//scanf("%c", &ch);//%c不会忽略空白字符，总是返回当前第一个字符，无论该字符是否为空格
//	scanf(" %c", & ch);//可在%c前添加空格使其忽略空格
//	printf("%c-----\n", ch);
//	return 0;
//}
//int main()
//{
//	char arr[20];
//	scanf("%s", arr);//数组名不需要取地址，其本身就是地址
//	printf("%s\n", arr);
//	return 0;
//}//%s读取规则：从当前第一个非空白字符开始读起，直到遇到空白字符（空格、换行符、制表符等）为止
//scanf()将字符串读入字符数组时，不会检测字符串是否超过了数组长度，所以存储字符串时很可能会超过数组的边界，为防止这种情况，使用%s占位符时，应该指定读入字符串的最长长度，即写成%[m]s
//int main()
//{
//	char arr[20];
//	scanf("%[^\n]s", arr);//直到遇到\n停止
//	printf("%s\n", arr);
//	return 0;
//
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	printf("%d %d %d", year, month, day);
//	return 0;
//}//*为赋值忽略符，加在任何占位符的%后面，该占位符就不会返回值，解析后将被丢弃