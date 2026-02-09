//find out the avg from 31 -40 except 33 36 39
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i = 31; i<=40; i++){
        if(i==33 || i==36|| i==39){
            continue;
        }else{
            sum = sum+i;
        }
    }
    printf("%d", sum/7);
}