#include <stdio.h>

int nth_term(int a, int d, int n){

    // using formula to find nth term of AP
    int nth = (a + (n - 1) * d);

    return nth;
}

int main(){
    int a = 2;
    int d = 1;
    int n = 5;

    printf("The %dth term of AP is: %d\n", n, nth_term(a, d, n));

    return 0;
}

// AP = a + (n - 1) * d