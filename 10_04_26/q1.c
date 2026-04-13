//get the sum of prime elements from the array yb passing the array to the function

#include<stdio.h>
int prime(int a){
    int temp=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            temp=1;
            break;
        }
    }
    return temp;
}

int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(!prime(arr[i])){
            sum += arr[i];
        }
    }

    printf("total sum: %d",sum);
    // int arr[3]={4,5,6};
    // for(int i=0;i<3;i++){
    //     printf("%d ",prime(arr[i]));
    // }
}