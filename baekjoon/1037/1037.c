#include <stdio.h>
int main(void)
{
    int a;  //약수
    long long min=0,max=1000001;    //최대 최소

    int noa;    //약수의 개수
    scanf("%d", &noa);

    for(int i=0; i<noa; i++){//약수의 개수만큼 입력
        scanf("%d", &a);
        
        if(a>min)   //그중 최대 최소 찾음
        min=a;
        if(a<max)
        max=a;
    }
    printf("%lld",max*min);

    return 0;
}