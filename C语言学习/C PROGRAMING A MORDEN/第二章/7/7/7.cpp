// 7.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable:4996)

int main()
{
	int x, a, b, c, d;
	printf("Enter a dollar amount:");
	scanf("%d", &x);
	a = x / 20; b =( x % 20 )/ 10; c = x % 10 / 5; d = x % 5;
	printf("$20 bills: %d\n", a);
	printf("$10 bills: %d\n", b);
	printf("$5 bills: %d\n", c);
	printf("$1 bills: %d\n", d);
	return 0;
}
