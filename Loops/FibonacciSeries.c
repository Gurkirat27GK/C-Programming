#include <stdio.h>

int main(){
    int n = 10;

    int a = 0;
    int b = 1;
    printf("%d ", a);
    printf("%d ", b);

    for (int i = 1; i <= n; i++){
        int nextNumber = a + b;
        printf("%d ", nextNumber);

        a = b;
        b = nextNumber;
    }

    return 0;
}