//find out the sum of array element except smallest and largest
#include<stdio.h>
int main(){
    int arr[]={10,19,45,23,67,89,23,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int sum;
    for(int i =1;i<n-1;i++){
        sum += arr[i];
    }
    printf("%d",sum);
}