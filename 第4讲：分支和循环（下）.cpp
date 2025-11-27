#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>//system函数头文件
//#include <string.h>//strcmp函数头文件
//shutdown是用来关机的名字 -s是设置关机 -t是设置倒计时 -a是取消关机
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t  60");//system函数用来执行命令
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);//input不需要取地址，因为数组名本身就是地址
//	//两个字符串在比较内容时不能使用==
//	//strcmp - string compare
//	//如果两个字符串相等，strcmp函数会返回0
//	if (strcmp(input, "我是猪") == 0) {
//		system("shutdown -a");
//		printf("关机被取消\n");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t  60");//system函数用来执行命令
//    while (1) {//1为真，while循环一直执行
//		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0) {
//			system("shutdown -a");
//			printf("关机被取消\n");
//			break; 
//		}
//	}
//	return 0;
//}
//#include <stdlib.h>
//int main()
//{
//	printf("%d\n", rand());//rand函数生成随机数的默认种子为1
//	printf("%d\n", rand());//int rand (void)
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
//int main()
//{
//	srand(1);//设置随机数生成的种子,
//	printf("%d\n", rand());//void srand (unsigned int seed)
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}
//#include <stdlib.h>
//#include <time.h>//time函数头文件
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand() % 100);//生成0-99的随机数
//	printf("%d\n", rand() % 100 + 1);//生成1-100的随机数
//	printf("%d\n", 100 + rand() % (200 - 100 + 1));//生成100-200的随机数
//	printf("%d\n", rand());//a+rand()%(b-a+1),生成a-b的随机数
//	printf("%d\n", rand());
//	return 0;
//}
#include <stdlib.h>
#include <time.h>
//void menu()//封装
//{
//	printf("********************\n");
//	printf("****** 1.play ******\n");
//	printf("****** 0.exit ******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int r = rand()%10;
//	int g = 0;
//	int count = 5;
//	while (count) {
//		printf("你还有%d次机会\n",count);
//		printf("猜猜数字：");
//		scanf("%d", &g);
//		if (g < r) {
//			printf("猜小了\n");
//		}
//		else if (g > r) {
//			printf("猜大了\n");
//		}
//		else {
//			printf("恭喜你，猜对了，数字是：%d", r);
//				break;
//		}
//		count--;
//	}
//	if (count == 0) {
//		printf("你失败了，正确值是：%d\n", r);
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//只调用一次
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;