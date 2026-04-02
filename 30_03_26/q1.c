#include<stdio.h>   

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int replace, to;
    int s=sizeof(arr)/sizeof(arr[0]);
    printf("enter no. to replace:");
    scanf("%d\n",&replace);
    scanf("%d\n",&to);
    printf("enter no. replace to:");
    

    for(int i=0;i<n;i++){
        if(arr[i]==replace){
            arr[i]=to;
        }
        printf("%d\t",arr[i]);
    }
}