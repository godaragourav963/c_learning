//find out the sum of prime element of the array
#include<stdio.h>
int main(){
    int arr[] = {10,20,30,3,43};
    int sum=0,n,temp;
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                temp = 0;
                break;
            }else{
                temp =1;
            }
        }
        if(temp == 0){
                sum += arr[i];
            }
        
    }
    printf("%d",sum);
}