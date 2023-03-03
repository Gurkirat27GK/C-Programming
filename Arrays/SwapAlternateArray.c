#include <stdio.h>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void swapAlternate(int arr[], int size){
    int temp;
    for (int i = 0; i < size; i = i + 2){     // +2 for alternate swap
        if (i + 1 < size){
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main(){
    int a, b;
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {11,33,9,76,43};

    swapAlternate(even, 8);
    printArray(even, 8);

    printf("\n");

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}