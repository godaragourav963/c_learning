#include<stdio.h>
int main(){
    int n,temp=0;
    for(int i = 21;i<=40;i++){
        if(i%2==0||i%3==0||i%5==0||i%7==0){
            continue;
        }else{
            temp+=i;
        }
    }
    printf("%d",temp);
}