#include<stdio.h>
//strlen function count give length of the string
int mystrlen(char name[]){
    int count=0;
    
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
//strcmp compares the strings 
int mystrcmp(char name[], int count){
    char name2[100];
    for(int i=0;;i++){
        scanf("%c",&name2[i]);
        if(name2[i]=='\n'){
            name2[i]='\0';
            break;
        }
    }
    int count2= mystrlen(name2);

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
        printf("same\n");
        }
    }else {
        printf("%d\n",sum-sum2);
    }
}
//strcpy to copy a string
int mystrcpy(char name[], int count){
    char cpy[count];
    for(int i=0;i<count;i++){
        cpy[i]=name[i];
    }
    for(int i=0;i<count;i++){
        printf("%c",cpy[i]);
    }
}
//strcat to concanate two strings
int mystrcat(char name[], int count){
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

int main(){
    char name[100];
    for(int i=0;;i++){
        scanf("%c",&name[i]);
        if(name[i]=='\n'){
            name[i]='\0';
            break;
        }
    }
    int length = mystrlen(name);
    //printf("%d\n",length);

    //mystrcmp(name,length);

    //mystrcpy(name, length);

    mystrcat(name, length);
}