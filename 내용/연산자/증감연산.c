#include <stdio.h>

int main(void)
{
    int a = 5;

    int b = ++a; // 전위 증가: a = 6, b = 6
    int c = a++; // 후위 증가: c = 6, a = 7

    printf("a: %d, b: %d, c: %d\n", a, b, c); // a: 7, b: 6, c: 6

    return 0;
}