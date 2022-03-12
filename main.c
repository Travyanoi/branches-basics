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
    int a = sum(first, second);
    int b = minus(first, second);

    printf("sum = %d, minus = %d", a, b);
    printf("%d\n", sum(first, second));
    printf("%d\n", minus(first, second));

    return 0;
}