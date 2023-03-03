#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    bool isPrime = 1;

    for (int i = 2; i < n; i++){
        //remainder = 0, Not a Prime
        if (n % i == 0){
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0){
        printf("Not a Prime Number");
    }
    else{
        printf("is a Prime Number");
    }
    return 0;
}