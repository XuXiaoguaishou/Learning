// chapter21.cpp: 定义控制台应用程序的入口点。
//



/*2*/
#include <stdafx.h>
#define PI 3.1415926
int main(void)
{
	int radius = 10;
	float volume;
	volume = 4.0f / 3.0f*PI*radius*radius*radius;
	printf("%f\n", volume);
	return 0;

}
