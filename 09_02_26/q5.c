//print 1-100 skip %3 stop at 75
#include<stdio.h>
int main(){
    for(int i =0; i<=100; i++){
        if(i==75){
            break;
        }else if(i%3==0){
            continue;
        }else{
            printf("%d ", i);
        }
    }
}