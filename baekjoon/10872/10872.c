#include <stdio.h>

int main(){
    int N,i;
    long long int a=1;
    scanf("%d",&N);
    for (i = N ; i>0 ; i--)
    {
        a=a*i;
    }
    printf("%lld\n",a);
    
}