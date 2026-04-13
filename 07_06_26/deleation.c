#include<stdio.h>

int main(){
    int arr[50] = {10,20,90,80,50,60};
    int size = 6;
    int ele = 50;
    int ind = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            ind = i;
        }
    }
    for(int i=ind+1;i<size;i++){
        arr[i-1]=arr[i];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
