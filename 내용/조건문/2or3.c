#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d",&a);

    if(a%6==0){
        printf("2와 3의 공배수\n");
    }else if(a%2==0){
        printf("2의 배수이면서 3의 배수가 아닌것\n");
    }else if(a%3==0){
        printf("3의 배수이면서 2의 배수가 아닌것\n");
    }else{
        printf("2와 3의 배수가 아닌것\n");
    }
    return 0;
}