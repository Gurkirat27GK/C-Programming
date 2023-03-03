#include <stdio.h>

// Optimized code (dimag lga h)

int intersection(int arr1[], int arr2[], int n, int m){
    int i = 0, j = 0;
    int ans;

    while (i < n && j < m){
        if (arr1[i] == arr2[j]){
            printf("%d ", arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j]){
            i++;
        }

        else{
            j++;
        }
    }
    return ans;
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,4,5,6,7};

    intersection(arr1, arr2, 5, 5);
}