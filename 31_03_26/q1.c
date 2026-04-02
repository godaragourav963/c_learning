#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    //sum of rows
    // for(int i=0;i<n;i++){
    //     int x= sizeof(arr[0])/sizeof(arr[0][0]);
    //     for(int j=0;j<x;j++){
    //         //printf("%d\t",arr[i][j]);
    //         //sum += arr[i][j];
            
    //     }
        
    //     printf("sum of %d row: %d",i+1, sum );
    //     printf("\n");
    //     sum = 0;
    // }

    //sum of column
    // int x= sizeof(arr[0])/sizeof(arr[0][0]);
    // for(int j=0;j<x;j++){
    //     int n = sizeof(arr)/sizeof(arr[0]);
    //     for(int i=0;i<n;i++){
    //         //printf("%d\t",arr[i][j]);
    //         sum += arr[i][j];
            
    //     }
        
    //     printf("sum of %d column: %d",j+1, sum );
    //     printf("\n");
    //     sum = 0;
    // }
    //sum of daigonal
    // for(int i=0;i<n;i++){
    //     int x= sizeof(arr[0])/sizeof(arr[0][0]);
    //     for(int j=0;j<x;j++){
    //         //printf("%d\t",arr[i][j]);
    //         if(i==j){
    //         sum += arr[i][j];
    //         }
            
    //     }
        
        
    //     //printf("\n");
    //     //sum = 0;
    // }
    // printf("sum of daigonal: %d", sum );

    //sum of anti daigonal
    for(int i=0;i<n;i++){
        int x= sizeof(arr[0])/sizeof(arr[0][0]);
        for(int j=0;j<x;j++){
            //printf("%d\t",arr[i][j]);
            if(i+j==2){
            sum += arr[i][j];
            }
            
        }
        
        
        //printf("\n");
        //sum = 0;
    }
    printf("sum of anti daigonal: %d", sum );
}