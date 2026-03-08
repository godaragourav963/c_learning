//find sum of all even from 1-50 using function

#include<stdio.h>
int temp,a;
int sofeven(int a){
    for(int i=1;i<=a;i++){
        if(i%2==0){
        temp +=i;
        }
    }
    printf("%d",temp);
}

int main(){
    scanf("%d",&a);
    sofeven(a);
}