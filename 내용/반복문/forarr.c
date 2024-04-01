#include <stdio.h>

int main(void)
{
    int sum;
    int arr[10]={0,};

    for (int i=0; i<=9; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    for (int i=0; i<=9; i++) {
        scanf("%d",&arr[i]);
    }

    for (int i=0; i<=9; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}