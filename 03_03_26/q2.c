#include<stdio.h>
// int febo(int a){
//     int x1=2,x2=1,y;
//     //y=x1+x2;
//     if(a<2){
//         return 0;
//     }
//     for(int i=0; i<a-2;i++){
//         printf("%d\t",y);
//         x1=x2;
//         x2=y;
//         y=x1+x2;
//     }
// }

// int main(){
//     int a;
//     scanf("%d",&a);
//     printf("%d\t%d\t",0,1);
//     febo(a);
//     //printf("%d", febo(a));
// }

void fido(int n){
    int f=0,s=1,sum;
    printf("%d %d ",f,s);
    for(int i=1;i<n-1;i++){
        sum = f+s;
        f=s;
        s=sum;
        printf("%d ",sum);
    }
}

int main(){
    fido(10);
}
//#include <stdio.h>