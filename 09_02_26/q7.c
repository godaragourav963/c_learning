//51-100 %3,5 sum of unit

#include<stdio.h>
int main(){
    int sum =0;
    for(int i = 51; i<=100; i++){
        if(i%3==0||i%5==0){
            sum = sum + (i%10);
        }
    }
    printf("%d",sum);
}