//condiation for marriage

#include <stdio.h>

int main(){
    int age;
    scanf("%d", &age);
    if (age<=1){
        printf("invalid");
    }else if (age<18){
        printf("minor");
    }else if(age<=21){
        printf("adult but not elegible for marriage");
    }else if(age<50){
        printf("eligible");
    }else if(age>50){
        printf("too old, expired");
    }else{
        printf("invalid");
    }
}