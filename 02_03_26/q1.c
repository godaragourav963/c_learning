//find prime or not using function
#include<stdio.h>
int temp,a;
int prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }else{
            printf("Prime");
            break;
        }
    }
}

int main(){
    scanf("%d",&a);
    prime(a);
}