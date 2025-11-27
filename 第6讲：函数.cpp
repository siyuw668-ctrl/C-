#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ret_type fun_name(形式参数)
//函数返回类型 函数名
//{
//}函数体
//int Add(int x, int y)//形参：形式参数
//                    //如果只定义，不调用，x和y只是形式上的存在，不会向内存申请空间，不会真实存在
//{                  //形参只有在函数被调用的过程中为了存放实参传递过来的值，才向内存申请空间，这个过程就是形参的实例化
//	int z = 0;    //形参的修改不会影响实参 
//	z = x + y;
//	return z; //return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);//实参：真实传递给函数的参数
//	printf("%d\n", c);//形参和实参是各自独立的内存空间
//	return 0;        //实参和形参的名字可以相同，但依然是各自独立的内存空间
//}
//bool is_odd(int n)      
//{
//	if (n % 2 == 1)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (is_odd(n))
//	    printf("是奇数\n");
//	else
//		printf("是偶数\n");
//	return 0;
//}
//int is_odd(int n)
//{
//	if (n % 2 == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if ((is_odd(n)) == 1)
//		printf("是奇数\n");
//	else
//		printf("是偶数\n");
//	return 0;
//}
//void test(int n)
//{
//	if (n < 0)
//		return;
//	else if (n > 20)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	printf("heihei\n");
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	test(n); 
//	return 0;
//}
//int test();
//{
//	return 3.4;//return的返回值和返回类型不一致，系统会自动将返回的值隐式转换为函数的返回类型
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//
//int test()
//{
//	int n = 0;
//	scanf("%d",&n);
//	if (n > 0)
//		return 1;//如果函数存在if等分支语句，要保证每种情况下都有return的返回值
//}
//int main()
//{
//	test();
//	return 0;
//}
//函数的返回类型如果不写，编译器会默认函数的返回类型是int
//函数写了返回类型，但是函数中没有使用return返回值，那么函数的返回值是未知的
//void set_arr(int arr[],int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        arr[i] = -1;
//    }
//}
//void print_arr(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++) {
//        printf("%d\t", arr[i]);
//    }
//    printf("\n");
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print_arr(arr, sz);
//    set_arr(arr, sz);
//    print_arr(arr, sz);
//    return 0;
//}
//函数的实参是数组，形参也是写成数组形式
//形参如果是一维数组，数组的大小可以省略不写
//形参如果是二维数组，行可以省略，但是列不能省略
//void print_arr2(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++) {
//		int j = 0;
//		for (j = 0; j < c; j++) {
//			printf("%d\t", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3},{2,3,4,5},{3,4,5,6,7} };
//	print_arr2(arr, 3, 5);
//	return 0;
//}
//数组传参，形参是不会创建新数组的，形参操作的数组和实参的数组是同一个数组
bool is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return true;
	else
		return false;
}
int get_days_of_month(int y, int m)
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int d = days[m];
		if (is_leap_year(y) && m == 2) {
			d += 1;
		}
		return d;
}
int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int d = get_days_of_month(year, month);
	printf("%d\n", d);
	return 0;
}