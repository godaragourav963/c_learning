//product of even elements from the array
#include<stdio.h>
int main(){
    int n,product=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            product *= arr[i];
        }
    }
    printf("%d",product);
}