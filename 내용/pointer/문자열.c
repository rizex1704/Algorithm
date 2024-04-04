#include <stdio.h>

int main(){
    char arr[100];
    scanf("%s",arr);
    printf("%s\n",arr);
    for(int i=0;i!=100;++i){
        printf("%d ",arr[i]);
    }
    printf("\n");
}