#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "Innocent_Guy";
    int count = 0;
    for(int i= 0; i<strlen(name); i++ ){
        if (name[i]>=65 && name[i] <= 90){
            count++;
        };
    };
    printf("%d", count);
}