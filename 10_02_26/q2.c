#include<stdio.h>
int main(){
    float a=10,b=20;
    char o;
    scanf("%c",&o);
    switch(o){
        case '+':
         printf("%.2f",a+b);
         break;
        case '-':
         printf("%.2f",a-b);
         break;
        case '*':
         printf("%.2f",a*b);
         break;
        case '/':
         printf("%.2f",b/a);
         break;
    }
}