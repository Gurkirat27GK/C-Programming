#include <stdio.h>
#include <limits.h>     // TO USE INT_MIN & INT_MAX

int getMax(int num[], int n){
    int max = INT_MIN;

    for (int i = 0; i < n; i++){
        if (num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n){
    int min = INT_MAX;

    for (int i = 0; i < n; i++){
        if (num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int size;
    scanf("%d", &size);

    int num[100];

    //taking input in array
    for (int i = 0; i < size; i++){
        scanf("%d", &num[i]);
    }

    printf("Maximum value is %d \n", getMax(num, size));
    printf("Minimum value is %d \n", getMin(num, size));

    return 0;
}