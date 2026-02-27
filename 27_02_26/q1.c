//prime number

#include<stdio.h>
int main(){
    int n,temp=0;
    scanf("%d",&n);
    for(int i = 2;i<n;i++){
        if(n%i==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("prime number");
    }else{
        printf("not a prime number");
    }
}