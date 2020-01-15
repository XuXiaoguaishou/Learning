#include "stdafx.h"

#pragma warning(disable: 4996)

int main()
{
	int m, d, y;
	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("You entered the date %d%.2d%.2d", y, m, d);

	return 0;
}
