// 3.cpp: 定义控制台应用程序的入口点。
//

/*3*/
#include <stdafx.h>
#define PI 3.1415926
#pragma warning(disable:4996)
int main(void)
{
	float radius, volume;
	printf("请输入球体半径:");
	scanf("%f", &radius);
	volume = 4.0f / 3.0f*PI*radius*radius*radius;
	printf("%f", volume);
	return 0;

}
