//print all odd number from 1-20 using function

#include<stdio.h>
int temp,a;
int sofodd(int a){
    for(int i=1;i<=a;i++){
        if(i%2!=0){
        temp +=i;
        }
    }
    printf("%d",temp);
}

int main(){
    scanf("%d",&a);
    sofodd(a);
}