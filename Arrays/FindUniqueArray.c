#include <stdio.h>

int findUnique(int arr[], int size){
    int ans = 0;

    for (int i = 0; i < size; i++){ 
        ans = ans ^ arr[i];           // a^a = 0
    }                                 // 0^a = 1
    return ans;
}

int main(){
    int arr[] = {1,2,1,2,7};     // OUTPUT = 7
    int size = sizeof(arr) / sizeof(arr[0]);     // remember

    printf("%d", findUnique(arr, size));

    return 0;
}// naveen