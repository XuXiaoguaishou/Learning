//2.8
#include "stdio.h"
#pragma warning(disable: 4996)

void one_three(void);
void two(void);
void three(void);

int main()
{
    printf("Starting now!\n");
    one_three();
    printf("done!\n");
    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}
