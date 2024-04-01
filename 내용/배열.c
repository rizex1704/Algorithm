#include <stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5}; //배열 선언 및 초기화

    printf("arr[%d|%d|%d|%d|%d]\n",arr[0],arr[1],arr[2],arr[3],arr[4]);

    arr[0]=arr[0]*2;
    arr[1]=arr[1]*2;
    arr[2]=arr[2]*2;
    arr[3]=arr[3]*2;
    arr[4]=arr[4]*2;

    printf("arr[%d|%d|%d|%d|%d]\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}