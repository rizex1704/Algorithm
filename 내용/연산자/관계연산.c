#include <stdio.h>

int main(void)
{
    int a = 5, b = 7;

    printf("%d == %d: %d\n", a, b, a == b); // 0 (거짓)
    printf("%d != %d: %d\n", a, b, a != b); // 1 (참)
    printf("%d > %d: %d\n", a, b, a > b);   // 0 (거짓)
    printf("%d < %d: %d\n", a, b, a < b);   // 1 (참)
    printf("%d >= %d: %d\n", a, b, a >= b); // 0 (거짓)
    printf("%d <= %d: %d\n", a, b, a <= b); // 1 (참)

    return 0;
}