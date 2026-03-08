//print all prime number from 1-20 using function

#include<stdio.h>
int temp,a;
int prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            continue;
            
        }else{
            printf("%d\n",i);
            
        }
    }
}

int main(){
    scanf("%d",&a);
    prime(a);
}