#include <stdio.h>
#include <math.h>

int octalToDecimal(int n){
    int ans = 0;
    int x = 1;

    while (n > 0){
        int y = n % 10;
        ans = ans + x * y;
        x = x * 8;
        n = n / 10;
    }

    return ans;
}

int decimalToOctal(int m){
    int x = 1;
    int ans = 0;

    while (x <= m){
        x = x * 8;
    }
    x = x / 8; 
    
    while (x > 0){
        int lastDigit = m / x;
        m = m - lastDigit * x;
        x = x / 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);

    int m;
    scanf("%d", &m);

    printf("%d\n", octalToDecimal(n));

    printf("%d\n", decimalToOctal(m));

    return 0;
}