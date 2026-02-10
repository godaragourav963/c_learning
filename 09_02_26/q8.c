//732 - 989 extreme digit must be ofd and center must b even
#include<stdio.h>
int main(){
    for(int i = 732; i<=740;i++){
        int x=i%10,y=i/10,z=(i%100)/10;
        printf("%d %d %d", x,y,z);
    }
}