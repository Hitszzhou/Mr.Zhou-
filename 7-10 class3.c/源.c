#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char ch = 'w';
	char* pc= &ch;
	printf("%d\n", sizeof(pc));
	/**pc = 'a';
	printf("%c\n", ch);*/


	return 0;
}
//{
//	int a =2 ;
//	int* p = &a;
//	printf("%p\n", &a);
//	
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;//*p
//
//}
////#define Max(X,Y) (X>Y?X:Y)
////int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//#define ���Զ����
//int main()
//{
//
//
//	return 0;
//extern int Add(int, int);
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;

//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}


//	return 0;
//}
//int main()
//{
//	register int a = 2;//�����a����ɼĴ�������
//	typedef unsigned int u_int;
//
//	u_int num = -2;
//	
//	printf("%d\n",num);
//	return 0;
//}

//{
//	int a = 2;
//	int b = 1;
//	int max = 0;
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//	
//	return 0;
//}
//
////ֻҪ���������ǲ���
//����:
//ԭ��--->    ����--->   ����
//д��������  ��         ��1
// auto 
//
//
//////
// 
// 
//	double a = 3.14;
//	printf("%d", a);
//
//
//	return 0;
//}
//{
//
//	int a = 10;
//	int b = a--;//ǰ��++ ��++��ʹ��,����++��ʹ��,��++
//	printf("a = %d,b = %d\n", a, b);
//
//	return 0;
//}
//{
//
//	long long a = 0;
//	long long b = ~a;//b���з��ŵ�����
//	printf("%d\n", b);
//	//�������ڴ��д���ʱ
//	//ԭ��,����,����
//
//
//	return 0;
//}
//{
//	int arr[]{ 1,2,3,4,5 };
//	int a = 22;
//	printf("%d\n", sizeof a);
//	
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
