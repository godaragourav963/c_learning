//print the list of even no using pointer

#include<stdio.h>
int main(){
    int a,sum=0;
    scanf("%d",&a);
    int *p=&a;

    while(*p>0){
        int digit = *p%10;
        if(digit%2==0){
            printf("%d ",digit);
        }
        *p /= 10;
    }
}