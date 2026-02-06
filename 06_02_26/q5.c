#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "Dad_Little_Princess";
    int count = 0;
    for(int i= 0; i<strlen(name); i++ ){
        if(name[i]>=97 && name[i]<=122){
            count++;
        }
    };
    printf("%d",count);
    return 0;
}