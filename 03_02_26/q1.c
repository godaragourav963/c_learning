#include<stdio.h>

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i = a; i<=b; i++){
        if (i%4==0){
            printf("%d ",i);
        }
    }
}