#include <stdio.h>

int main(void)
{
    int a;  //약수
    long long max=0,min=1000001;    //최대 최소

    int noa;    //약수의 개수
    scanf("%d", &noa);

    for(int i=0; i<noa; i++)//약수의 개수만큼 입력
    {
        scanf("%d", &a);
        
        if(a>max)   //그중 최대 최소 찾음
        max=a;
        if(a<min)
        min=a;
    }
    printf("%lld\n",max*min);

    return 0;
}