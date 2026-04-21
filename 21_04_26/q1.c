//without string functions strlen strcmp strcpy strcat implement their functons

#include<stdio.h>
#include <string.h>
int main(){
    char name[100];
    int count=0,count2=0;
    //strlen function count give length of the string
    for(int i=0;;i++){
        scanf("%c",&name[i]);
        if(name[i]=='\n'){
            name[i]='\0';
            break;
        }
        count++;
    }
    //strcmp compares the strings 
    char name2[100];
    for(int i=0;;i++){
        scanf("%c",&name2[i]);
        if(name2[i]=='\n'){
            name2[i]='\0';
            break;
        }
        count2++;
    }
    int temp=1;
    int sum=0,sum2=0;
    for(int i=0;i<count;i++){
        sum += name[i];
    }
    for(int i=0;i<count2;i++){
        sum2 += name2[i];
    }
    if(sum==sum2){
        for(int i=0;i<count;i++){
            if(name[i] != name2[i]){
                temp = 0;
                break;
            }
        }
        if(temp==1){
        printf("same");
        }
    }else {
        printf("%d",sum-sum2);
    }

    //strcpy
    char cpy[count];
    for(int i=0;i<count;i++){
        cpy[i]=name[i];
    }
    for(int i=0;i<count;i++){
        printf("%c",cpy[i]);
    }

    //strcat
    int countcpy=0;
    char cat[100];
    for(int i=0;;i++){
        scanf("%c",&cat[i]);
        if(cat[i]=='\n'){
            cat[i]='\0';
            break;
        }
        countcpy++;
    }
    int total=count+countcpy;
    for(int i=0; i<countcpy; i++){
        name[count + i] = cat[i];
    }
    name[count + countcpy] = '\0';
    printf("%s",name);
}