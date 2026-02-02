//swaping two varaible using temperory variable

#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c= a;
    a = b;
    printf("%d", a);
    printf("%d", c);
}