//print the list of the element whose sum of digit is even 

#include<stdio.h>
int main(){
    int a=5,sum=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    //int arr[5] = {11,45,67,34,67};
    int *p=arr;
    for(int i=0;i<a;i++){
        while(*(p+i)>0){
        int digit = *(p+i)%10;
        sum+= digit;
        *(p+i) /= 10;
        }
        printf("%d ",sum);
        if(sum%2==0){
            printf("%d ",*(p+i));
        }
        sum=0;
    }
    
}