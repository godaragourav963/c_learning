#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "gourav";
    for(int i=0;i<strlen(name);i++){
        printf("%c", name[i]-32);
    }
}