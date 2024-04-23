#include <stdio.h>
#include <stdlib.h>

int main(){
    double* arr;
    double max=0, n=0;
    int i,j,c;

    scanf("%d",&c);
    arr = (double*)calloc(c, sizeof(double));

    for(i=0;i<c;i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max)
            max=arr[i];
    }

    for(j=0;j<c;j++){
        arr[j]=arr[j]/max*100;
        n+=arr[j];
    }

    printf("%lf", n/c);
    free(arr);
}