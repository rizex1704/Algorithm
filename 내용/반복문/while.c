#include <stdio.h>

int main(void)
{
    int num, sum = 0;

    printf("숫자를 입력 (0을 입력하면 종료): ");
    scanf("%d", &num);

    //for (;num != 0;)
    //{
    //  sum += num;
    //생략
    //}
    while (num != 0) {
        sum += num;
        printf("숫자를 입력 (0을 입력하면 종료): ");
        scanf("%d", &num);
    }

    printf("입력한 숫자들의 합:%d\n", sum);

    return 0;
}