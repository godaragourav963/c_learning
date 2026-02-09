//find out the sum of  no. which is disivible by 7 and 8 from 1 - 500

#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i<=500; i++){
        if(i%56==0){
            sum = sum+i;
        }else{
            continue;
        }
    }
    printf("%d", sum);
}