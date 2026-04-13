//check the arr element are already sorted or not

#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,16,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int temp=0;
    for(int i = 0; i<n;i++){
        if(arr[i]<arr[i+1] && arr[i-1]<arr[i]){
            continue;
        }else if(arr[i]>arr[i+1] && arr[i-1]>arr[i]){
            continue;
        }else if (arr[0]<arr[1]){
            //temp--;
        }else if(arr[0]>arr[1]){
            //temp--;
        }else{
            temp++;
        }
    }
    if(temp==0){
        printf("shorted ");
    }else{
        printf("not shorted ");
    }
    printf("%d",temp);
}