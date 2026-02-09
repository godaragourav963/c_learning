//print the list of no from 21 to 40 without divisible of 3

#include<stdio.h>
int main(){
    for(int i = 21; i<=40; i++){
        if(i%3==0){
            continue;
        }else{
            printf("%d ",i);
        }
    }
}