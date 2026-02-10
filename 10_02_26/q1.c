#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case '+':
         printf("addition");
         break;
        case '-':
         printf("substraction");
         break;
        case '*':
         printf("multiplication");
         break;
        case '/':
         printf("division");
         break;
    }
}