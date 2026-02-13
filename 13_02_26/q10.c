#include<stdio.h>
int main(){
    for(int i =1; i<=5; i++){
        for (int j =1;j<=5;j++){
            if(j==1||i==1&&j<=4||i==5&&j<=4||i==3&&j<=4||i*j==10||i*j==20){
                printf("$ ");
            }else{
                printf("  ");
            }
        };
        printf("\n");
    }
}