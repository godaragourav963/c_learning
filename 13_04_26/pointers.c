#include<stdio.h>
int main(){
    int a = 10;
    int *p=&a;
    // for(int i=0;i<10;i++){
    //     printf("%d\n",*p+i);
    // }

    
    (*p)++;
    printf("%d\n",*p);
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",p);
}