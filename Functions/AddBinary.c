#include <stdio.h>

int reverse(int n){
    int reverse = 0;

    while (n > 0){
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;     // seedha jodenge to add ho jyega
        n = n / 10;
    }
    return reverse;
}

int addBinary(int a, int b){
    int ans = 0;
    int prevCarry = 0;

    while (a > 0 && b > 0){
        if (a % 2 == 0 && b % 2 == 0){     // to remove last digit
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }

        else if ((a % 2 == 0 && b % 2 == 1) || ( a % 2 == 1 && b % 2 == 0)){
            if (prevCarry == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
            }

            else {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }

        else{
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a = a / 10;
        b = b / 10;
    }

    while (a > 0){
        if (prevCarry == 1){
            if (a % 2 == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
            }

            else{
            ans = ans * 10 + 1;
            prevCarry = 0;
            }
        }

        else{
            ans = ans * 10 + (a % 2);
        }
        a = a / 10;
    }

    while (b > 0){
        if (prevCarry == 1){
            if (b % 2 == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
            }

            else{
            ans = ans * 10 + 1;
            prevCarry = 0;
            }
        }

        else{
            ans = ans * 10 + (b % 2);
        }
        b = b / 10;
    }

    if (prevCarry == 1){
        ans = ans * 10 + 1;
    }
    ans = reverse(ans);
    return ans;
}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", addBinary(a, b));

    return 0;
}

/* 
10101 + 11010 = 101111

1 + 0 = 1
1 + 1 = 0 (1 carry forward)
0 + 0 = 0
*/