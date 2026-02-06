#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "HeArTsTeAlEr";
    for(int i= 0; i<strlen(name); i++ ){
        if (name[i]>=65 && name[i] <= 90){
            printf("%c",name[i]+32);
        }else if(name[i]>=97 && name[i]<=122){
            printf("%c",name[i]-32);
        }
    };
    return 0;
}