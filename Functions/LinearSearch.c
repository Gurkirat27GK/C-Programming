#include <stdio.h>

int search(int arr[], int size, int key){
    for (int i = 0; i < size; i++){
        if (arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    printf("Enter the element to search for \n");
    int key;
    scanf("%d", &key);

    int found = search(arr, 10, key);

    if (found){
        printf("Key is present \n");
    }
    else{
        printf("key is absent \n");
    }

    return 0;
}