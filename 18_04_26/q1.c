#include <stdio.h>

// function to sort array
void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
    int min = i;
    for(int j = i+1; j < n; j++){
        if(arr[j] < arr[min]){
            min = j;
        }
    }
    // swap
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}
}

// function to find second largest using pointer
int secondLargest(int *arr, int n){
    return (arr[n-2]);
}

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int result = secondLargest(arr, n);
    printf("\nSecond Largest: %d", result);

    return 0;
}