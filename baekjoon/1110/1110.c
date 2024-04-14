#include <stdio.h>
int main(){
    int a,b,c,d=-1,r,n,count=0;
    scanf("%d",&n);
    r=n;
    while (d!=r)
    {
        a=n/10;
        b=n%10;
        c=(a+b)%10;
        d=(b*10)+c;
        n=d;
        count ++;
    }
    printf("%d\n",count);
}