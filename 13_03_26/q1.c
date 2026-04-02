//find out the sum of all elements from the array
#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int sum=0,n;
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);
}