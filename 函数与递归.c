#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include"add.h"

//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//递归常见的错误：栈溢出（stack overflow）
//栈区：局部变量，函数形参 函数空间一般在栈区申请
//堆区：动态开辟的内存 malloc calloc
//静态区：全局变量 static修饰的变量


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//  }
//	printf("%d ", n % 10);
// }
////分开打印输入数字
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归 有两个必要条件：1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//	                     //2.每次递归调用之后越来越接近这个限制条件
//	print(num);
//	//print(1234)
//	//print(123)
//	return 0;
//}

#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}//计算字符串长度
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	return 0;
//}//不创建临时变量，求字符串长度
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//
//	return 0;
//}



//用递归计算n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}


//int	Fac2(int n)
//{
//	int ret = 1;
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}



//计算第n个斐波那契数使用递归法效率极低
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}


//循环方式求斐波那契数更快 
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//    }
//	return c;
//}

//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//两份条件都满足是也有可能在栈溢出
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}


//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10] = {1,2,3};//不完全初始化，剩下的元素默认初始化为零
//	char arr2[5] = { 'a','b',98 };//放98也可以98对应b
//	char arr3[5] = "ab";//也可以
//	char arr4[] = "abcdef";//系统根据存放内容自动划分空间（7个字符，加\0）
//	printf("%d\n", sizeof(arr4));//7 sizeof 计算arr4所占空间大小7个元素-char 7*1=7
//	printf("%d\n", strlen(arr4));//6 strlen 求字符串的长度-'\0'之前的字符个数[a b c d e f \0] 6
//	return 0;
//}
//1.strlen和sizeof没有什么关联
//2.strlen是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
//3.sizeof计算变量，数组，类型的大小-单位是字节-操作符

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	//int i = 0; //有符号整型//无符号整型
//	//int len = strlen(arr);
//	//for (i = 0; i <len; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//素组在内存中是连续存放的
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, & arr[i]);
//		 
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		 }
//	}
//	/*int arr[3][4] = { {1,2,3},{4,5} };
//	char ch[5][6];*/
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//可以省略行 不能省略列
//	return 0;
//}