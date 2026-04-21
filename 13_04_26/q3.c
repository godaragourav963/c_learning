//find of the sum of digit of a no using pointer

#include<stdio.h>
int main(){
    int a,sum=0;
    scanf("%d",&a);
    int *p=&a;

    while(*p>0){
        int digit = *p%10;
        sum+= digit;
        *p /= 10;
    }
    printf("%d",sum);
}