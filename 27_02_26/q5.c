#include<stdio.h>
int main(){
    int n,temp=1;
    for(int i = 2;i<=10;i++){
        if(i==2||i==3||i==5||i==7){
            temp*=i;
        }
        else if(i%2==0||i%3==0||i%5==0||i%7==0){
            continue;
        }else{
            temp*=i;
        }
    }
    printf("%d",temp);
   
}