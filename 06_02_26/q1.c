#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "_._Self_Lover_._";
    int count = 0;
    for(int i= 0; i<strlen(name); i++ ){
        if (name[i]>=65 && name[i] <= 90){
            count++;
        }else if(name[i]>=97 && name[i]<=122){
            count++;
        }
    };
    printf("%d", count);
}