//print list of sum of digits of the element from the array
#include<stdio.h>
int main(){
    int sum=0,i,n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }     
     
    for(int i=0;i<n;i++){
        while(arr[i]>0){
            int mod = arr[i]%10;
            sum+=mod;
            arr[i]/=10;
     } 
     printf("%d\n",sum);
     sum = 0;
    }
}