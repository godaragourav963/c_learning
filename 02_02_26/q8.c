//swap two number without using temperory variable

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    //meathod one
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d %d", a, b);
}