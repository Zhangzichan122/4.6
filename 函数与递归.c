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
//�ݹ鳣���Ĵ���ջ�����stack overflow��
//ջ�����ֲ������������β� �����ռ�һ����ջ������
//��������̬���ٵ��ڴ� malloc calloc
//��̬����ȫ�ֱ��� static���εı���


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
////�ֿ���ӡ��������
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ� ��������Ҫ������1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//	                     //2.ÿ�εݹ����֮��Խ��Խ�ӽ������������
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
//	}//�����ַ�������
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	return 0;
//}//��������ʱ���������ַ�������
////�Ѵ��»�С
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);
//
//	return 0;
//}



//�õݹ����n�Ľ׳�
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



//�����n��쳲�������ʹ�õݹ鷨Ч�ʼ���
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}


//ѭ����ʽ��쳲����������� 
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
//	//TDD-������������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//����������������Ҳ�п�����ջ���
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
//	//����һ������-�������-10��
//	int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ��
//	char arr2[5] = { 'a','b',98 };//��98Ҳ����98��Ӧb
//	char arr3[5] = "ab";//Ҳ����
//	char arr4[] = "abcdef";//ϵͳ���ݴ�������Զ����ֿռ䣨7���ַ�����\0��
//	printf("%d\n", sizeof(arr4));//7 sizeof ����arr4��ռ�ռ��С7��Ԫ��-char 7*1=7
//	printf("%d\n", strlen(arr4));//6 strlen ���ַ����ĳ���-'\0'֮ǰ���ַ�����[a b c d e f \0] 6
//	return 0;
//}
//1.strlen��sizeofû��ʲô����
//2.strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//3.sizeof������������飬���͵Ĵ�С-��λ���ֽ�-������

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
//	//int i = 0; //�з�������//�޷�������
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//�������ڴ�����������ŵ�
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
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//����ʡ���� ����ʡ����
//	return 0;
//}