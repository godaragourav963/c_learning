//insert the element in a sorted array
#include<stdio.h>

int main(){
    int arr[50] = {10,20,50,60,70,80,90};
    int in,index;
    scanf("%d",&in);
    int size =7;
    for(int i=0;i<size;i++){
        if(arr[i]<in){
            index=i;
        }else{
            break;
        }
    }
     
    for(int i=size-1;i>index;i--){
        arr[i+1]=arr[i];
    }
    arr[index+1]=in;
    size++;

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}