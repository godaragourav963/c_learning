#include<stdio.h>

int main(){
    int arr[]={2,7,3,9,10,69,36,48,26,38};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j =0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }   
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}