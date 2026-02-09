//1-50 product of %9 and stop at 40
#include<stdio.h>
int main(){
    int p=1;
    for (int i=1; i<=50; i++){
        if(i==40){
            break;
        }else if(i%9==0){
            p*= i;
        }
    }
    printf("%d", p);
}