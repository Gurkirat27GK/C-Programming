#include <stdio.h>
#include <limits.h> 
#include <stdlib.h>

int max(int num[], int n){
    int max = INT_MIN;

    for (int i = 0; i < n; i++){
        if (num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int min(int num[], int n){
    int min = INT_MAX;

    for (int i = 0; i < n; i++){
        if (num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int pairSum(int arr[], int n, int s){
    int ans;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == s){
                int temp;
                printf("%d", min(arr[i], arr[j]));
                printf("%d", max(arr[i], arr[j]));
                printf("%d", temp);
            }
        }
    }
    qsort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int arr[] = {2, -3, 3, 3, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s;

    pairSum(arr, n, s);
}