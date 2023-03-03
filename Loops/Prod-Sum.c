#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int prod = 1;
    int sum = 0;

    while (n != 0){
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;

        n = n / 10;
    }
    printf("Sum is %d\n", sum);
    printf("Product is %d", prod);

    return 0;
}