#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "LoVeR_bOy";
    int small =0, capital=0;
    for(int i= 0; i<strlen(name); i++ ){
        if (name[i]>=65 && name[i] <= 90){
            capital++;
        }else if(name[i]>=97 && name[i]<=122){
            small++;
        }
    };
    printf("%d ,%d", small, capital);
    return 0;
}