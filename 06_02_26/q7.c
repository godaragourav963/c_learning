#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "duskyquessn1589";
    for(int i =strlen(name)-1;i >= 0; i-- ){
        if (name[i]>=48 && name[i] <= 57){
            printf("%c",name[i]);
        }
    };
    return 0;
}