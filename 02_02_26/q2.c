//find the largest from three numbers

#include <stdio.h>

int main(){
    int a = 10;
    int b = 30;
    int c = 45;
    if (a>b && a>c){
        printf("%d", a);
    }else if(b>a && b>c){
        printf("%d", b);
    }else{
        printf("%d", c);
    }
}