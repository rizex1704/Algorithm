#include <stdio.h>

void return_arr(int *arr,int len){
    for(int i=0; i!=len; ++i){
        *(arr+i)=10;
    }
}

int main(){
    int arr[10]={0,};
    for(int i=10; i!=10;++i){
        printf("|%d|",arr[i]);
    }
    printf("\n");

    return_arr(arr,10);
    for(int i=0;i!=10;i++){
        printf("|%d|",arr[i]);
    }
}