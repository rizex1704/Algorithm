#include <stdio.h>

int main(void)
{
    printf("int 자료형의 크기:%ld바이트\n", sizeof(int));
    printf("float 자료형의 크기:%ld바이트\n", sizeof(float));
    printf("double 자료형의 크기:%ld바이트\n",sizeof(double));
    printf("char 자료형의 크기:%ld바이트\n", sizeof(char));
    printf("long 자료형의 크기:%ld바이트\n",sizeof(long));
    printf("long long int 자료형의 크기:%ld바이트\n",sizeof(long long int));
    printf("unsigned 자료형의 크기:%ld바이트",sizeof(unsigned int));
    return 0;
}