#include <stdio.h>

int countRightZero(int n){
        int count =0;
        while(n!=0)
        {
            n/=5;
            count +=n;
        }
    }
int main(){

}
//0의 개수가 M개인 N! 가장 작은 N