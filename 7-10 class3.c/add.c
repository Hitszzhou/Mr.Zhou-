#define _CRT_SECURE_NO_WARNINGS 1
int g_val = 2022;
//static改变了作用域 
//static修饰函数改变了函数的链接属性
int Add(int x, int y)
{
	int z = x + y;
	return z;
}