#include <stdio.h>

int main(){
    int *ptr = (int *)malloc(sizeof(int) * 5); 
    
    for(int i=0;i!=5;i++){
        printf("%d",*(ptr+i));
    }
    printf("\n");

    free(ptr);

}