#include <stdio.h>

int main(void)
{
    int a = 5, b = 7;
    int c = 3, d = 0;

    printf("%d && %d: %d\n", a < b, c != d, (a < b) && (c != d)); // 1 (참)
    printf("%d || %d: %d\n", a == b, c == d, (a == b) || (c == d)); // 1 (참)
    printf("!(%d): %d\n", a > b, !(a > b)); // 1 (참)

    return 0;
}