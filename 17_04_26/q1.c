#include<stdio.h>
int num(int a){
    if(a>10){
        return 0;
    }
    printf("%d ",a);
    num(a+1);
}

int main(){
    num(1);
}