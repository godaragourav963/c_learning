//check the arry elemt are arrainged in accending or decending order

#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    if(arr[0]>arr[n-1]){
        printf("in decending order");
    }else{
        printf("in increasing order");
    }
}