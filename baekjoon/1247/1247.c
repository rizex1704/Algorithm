#include <stdio.h>
int main(){
    long int an,bn,cn;
    long long int a, b, c;
    long long int sa=0,sb=0,sc=0;
    
    scanf("%ld",&an);
    for (int i=0; i < an; i++)
    {
        scanf("%lld",&a);
        sa=sa+a;
    }
    scanf("%ld",&bn);
    for (int i=0; i < bn; i++)
    {
        scanf("%lld",&b);
        sb=sb+b;
    }
    scanf("%ld",&cn);
    for (int i=0; i < cn; i++)
    {
        scanf("%lld",&c);
        sc=sc+c;
    }
    if(sa>0)
    printf("+\n");
    else if (sa<0)
    printf("-\n");
    else
    printf("0\n");

    if(sb>0)
    printf("+\n");
    else if (sb<0)
    printf("-\n");
    else
    printf("0\n");

    if(sc>0)
    printf("+\n");
    else if (sc<0)
    printf("-\n");
    else
    printf("0\n");
    return 0;
}