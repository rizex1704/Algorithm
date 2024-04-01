#include <stdio.h>

int main(void)
{
    int num, sum = 0;

    do {
        printf("숫자를 입력 (0을 입력하면 종료): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("입력한 숫자들의 합:%d\n", sum);

    return 0;
}