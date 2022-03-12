#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int main()
{
    printf("Hello World!\n");
    int first = 55;
    int second = 345;
    sum(first, second);
    minus(first, second);

    return 0;
}