//check the no is prime or not using pointer

#include<stdio.h>
int main(){
    int a,temp=0;
    scanf("%d",&a);
    int *p=&a;
    for(int i=2;i<a;i++){
        if(*p%i==0){
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("prime no");
    }else{
        printf("not a prime no");
    }

}