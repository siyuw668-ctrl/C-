#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)//==是判断，=是赋值
//		printf("%d是奇数\n", n);
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)
//		printf("青年\n");
//	else if (age <= 59)
//		printf("中老年\n");
//	else if (age <= 89)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else//else与最接近的if匹配
//			printf("haha\n");//第二个else和if嵌套在第一个if语句中
//	return 0;
//}
//   
//多个条件运算符不宜连用
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
// if(a>5)
// b=3;
// else
// b=-3;
//	b = (a > 5 ? 3 : -3);//条件操作符/三目操作符
//		printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	/*if (a > b)
//		m = a;
//	else
//		m = b;*/
//	m = (a > b ? a : b);
//	printf("%d\n", m);
//	return 0;
//}
//int main（）
//{
//int flag = 0;
//if (!flag)//逻辑取反运算符
//printf("hehe\n");
//return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//		printf("闰年\n");
//	else
//		printf("平年\n");
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d\nb=%d\nc=%c\nd=%d\n", a, b, c, d
//		return 0;
//}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%c\nd=%d\n", a, b, c, d
//		return 0;
//}//逻辑运算符短路：左边的表达式满足逻辑运算符的条件，就不再对右边的表达式求值
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch后的expression必须是整型表达式
//	{
//	case 1://case后的值必须是整型常量表达式
//	case 2://case和后边的数字之间必须有空格
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;//case语句中的代码执行完成后，需要加上break才能跳出这个switch语句
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
/*int main()
{
	int n = 0;
	scanf("%d", &n);
	while (n) {//在 C / C++ 中，条件表达式会被视为布尔值：0 表示假（false），任何非 0 值表示真（true）。
		printf("%d ", n % 10);
		n = n / 10;
	}
	return 0;
}*/
//int main()
//{
//	int i = 0;
//	int sum = 0; 
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			sum += i;
//		}
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i+=3) {//优化：直接产生3的倍数省去多余的循环和判断
//		sum += i;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int cnt = 0;
//	int n = 0;
//	scanf("%d", &n);
//	do {
//		cnt++;
//		n = n / 10;
//	} while (n);
//	printf("%d\n", cnt);
//	return 0;
//}
/*int main()
{
	int i = 1;
	while (i <= 10) {
		if (i == 5)
			continue;
		printf("% d ", i);
	}//while循环中continue跳过某一次循环continue后面的代码直接到循环的判断部分进行下一次循环的判断
	//如果循环的调整是在continue后边的话可能会造成死循环
	return 0;
}*/
//int main()
//{
//	int i = 0;
//	while (i < 10) {
//		i++;
//		if (i == 5)
//			continue;
//		printf("% d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1; //flag标记
//		int j = 0;
//		for (j = 2; j <= i - 1; j++){
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
/*#include <math.h>
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i+=2) {//优化1：跳过偶数
		int flag = 1;//flag标记
		int j = 0;
		for (j = 2; j <= sqrt(i); j++){//优化2：如果i=a*b，a和b是i的因子，那么a和b中至少有一个数字<=sqrt(i)
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}*/
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//next://goto语句可以实现在同一个函数内（跨函数不能跳转）跳转到设置好的标号处
//	printf("heihei\n");
//	return 0;
//}//goto会打乱程序执行的流程，尽量不去使用，但一个break只能跳出一层for循环，在多层循环中快速跳出使用goto较为方便