#include <stdio.h>

int factorial(int n){

    int fact = 1;

    for (int i = 1; i <= n; i++){
    fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r){
    int numerator = factorial(n);

    int denominator = factorial(r) * factorial(n-r);

    return numerator / denominator;
}

int main(){
    int n, r;
    scanf("%d", &n);
    scanf("%d", &r);

    printf("Answer is %d\n", nCr(n, r));

    return 0;
}