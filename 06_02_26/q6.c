#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "LiFe~SaVeR";
    for(int i=strlen(name)-1;i>=0; i-- ){
        if (name[i]>=65 && name[i] <= 90){
            printf("%c",name[i]+32);
        }else if(name[i]>=97 && name[i]<=122){
            printf("%c",name[i]-32);
        }else{
            printf("%c", name[i]);
        }
    };
    return 0;
}