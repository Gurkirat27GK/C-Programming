#include <stdio.h>

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortOne(int arr[], int n){
    int left = 0, right = n - 1;

    while (left < right){
        while (arr[left] == 0 && left < right){
            left++;
        }

        while (arr[right] == 1 && left < right){
            right--;
        }
        
        // agar yha pohonch gye ho, iska mtlb
        // arr[left] == 1 and arr[right] == 0
        if (left < right){
            int temp;
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}