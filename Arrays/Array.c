#include <stdio.h>

int main(){
    //declare
    int number[15];

    // accessing an array
    printf("Value at 0 index is %d\n", number[0]);

    // initializing an array
    int second[3] = {5, 7, 11};

    printf("\nValue at 2 index is %d\n\n", second[2]);

    int third[15] = {2, 7};
    int n = 15;

    printf("printing the array \n\n");
    for (int i = 0; i < n; i++){
        printf("%d ", third[i]);
    }
    printf("\n\n");

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    printf("%c\n", ch[3]);

    printf("\nEverything is fine\n\n");

    return 0;
}