#include <stdio.h>
int *return_arr(){
    int arr[5]={1,2,3,4,5};
    return(arr);
}

int main(){
    printf("%d\n",*return_arr());
}