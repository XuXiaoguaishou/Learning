// 8.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#pragma warning(disable:4996)

int main()
{
	float lone, rate, monthly_payment, x, y, z;
	printf("Enter amount of loan:");
	scanf("%f", &lone);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f", &monthly_payment);
	x = lone - monthly_payment + rate / 100 / 12 * lone;
	y = x - monthly_payment + rate / 100 / 12 * x;
	z = y - monthly_payment + rate / 100 / 12 * y;
	printf("Balance remaining after first payment:$%.2f\n", x);
	printf("Balance remaining after second payment:$%.2f\n", y);
	printf("Balance remaining after third payment:$%.2f\n", z);
	return 0;
}