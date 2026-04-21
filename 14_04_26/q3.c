//print the list of element the whose sum of digit is prime

#include<stdio.h>
int main(){
    int a=5,sum=0,temp=0;;
    // scanf("%d",&a);
    // int arr[a];
    // for(int i=0;i<a;i++){
    //     scanf("%d",&arr[i]);
    // }
    int arr[5] = {11,45,67,34,92};
    int *p=arr;
    for(int i=0;i<a;i++){
        //sum of digit
        while(*(p+i)>0){
        int digit = *(p+i)%10;
        sum+= digit;
        *(p+i) /= 10;
        }
        //prime or not
        for(int i=2;i<sum;i++){
            if(sum%i==0){
                temp=1;
                break;
            }
        }

        printf("%d ",sum);
        // if(temp==0){
        //     printf("%d ",*(p+i));
        // }
        sum=0;
    }
    
}