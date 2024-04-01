#include <stdio.h>

int main(void)
{
    int n;
    printf("정수를 입력하시오:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("입력한 값은 양수\n");
    }
    else if(n<0)
    {
        printf("입력한 값은 음수\n");
    }
    else
    {
        printf("입력한 값은 0\n");
    }
    
    return 0;
}