#include<stdio.h>

int main(){
    int arr[50]={2,7,3,9,10,69,36,48,26,38};
    int size = 10;
    int element = 99;
    int pos=5,j=0;
    //at end
    arr[size] = element;
    size++;
    while(j=0){for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
j++;}
    //arr[50]={2,7,3,9,10,69,36,48,26,38};
    //size = 10;
    //at starting
    while(j=0){
        for(int i=size-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=element;
    size++;
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
j++;}
    printf("\n");
    //arr[50]={2,7,3,9,10,69,36,48,26,38};
    //size = 10;
    //at a postion
    while(j=0){for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos] = element;
    size++;
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
j++;}
}