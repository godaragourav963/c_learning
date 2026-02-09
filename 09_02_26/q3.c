//find out the difference between sum of all no from 1-50 and sum of even no. 51-100

#include<stdio.h>
int main(){
    int sum = 0,even=0;
    for(int i = 1; i<=50; i++){
         sum = sum+i;
    }
    for(int i = 51; i<=100; i++){
        if(i%2==0){
            even = even+i;
        }else{
            continue;
        }
    }
    int result = even - sum;
    printf("%d", even-sum);
}