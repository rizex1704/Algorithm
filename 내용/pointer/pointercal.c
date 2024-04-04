#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    double *ptr=arr;
    printf("%lld\n",*ptr);
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
}