#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int sum = 0, org_num = n;
    while (n > 0){
        int remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (org_num == sum){
        printf("Armstrong number\n");
    }

    else{
        printf("Not an Armstrong number\n");
    }

    return 0;
}

// 153 = 1^3 + 5^3 + 3^3 = 153