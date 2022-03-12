#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("Hello World!\n");
    int first = 55;
    int second = 345;
    sum(first, second);

    return 0;
}