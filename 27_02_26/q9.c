#include<stdio.h>
#include<string.h>
int main(){
    int n,count;
    scanf("%d",&n);
    char num[] = (char)n;
    for(int i = 1;i<=strlen(num);i++){
        for(int j=2;j<=(int)num[i];i++){
            if((int)num[i]%j==0){
                continue;
            }
            count+=1;
        }
        
    }
    printf("%d",count);

}