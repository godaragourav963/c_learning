//find out the sum of 1-10 using pointer

#include<stdio.h>
int main(){
    int a=1,sum=0;
    int *p=&a;
    for(int i=0;i<10;i++){
        sum += *p+i;
    }
    printf("%d",sum);
}