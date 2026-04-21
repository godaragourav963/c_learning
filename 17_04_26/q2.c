#include<stdio.h>
int main(){
    int a,b;
    printf("first matrix");
    printf("Enter the no. of rows: ");
    scanf("%d",&a);
    printf("Enter the no. of columns: ");
    scanf("%d",&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // int c,d;
    // printf("\n");
    // printf("second matrix");
    // printf("Enter the no. of rows: ");
    // scanf("%d",&c);
    // printf("Enter the no. of columns: ");
    // scanf("%d",&d);
    // int arr[c][d];
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<d;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }
    printf("    ");
    printf("first matrix\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf(arr[i][j]);
        }
    }
    // printf("\n");
    // printf("second matrix\n");
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<d;j++){
    //         printf(arr[i][j]);
    //     }
    // }
}