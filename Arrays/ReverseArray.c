#include <stdio.h>

void reverse(int arr[], int start, int end){
    int temp;

    while (start < end){       // swaping by storing one element's value
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){

    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    reverse(arr, 0, 5);
    reverse(brr, 0, 4);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}