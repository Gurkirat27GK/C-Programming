#include <stdio.h>

int main(){
    int amount;
    printf("Enter the amount in rupees ");
    scanf("%d", &amount);

    int Rs100, Rs50, Rs20, Rs1;

    switch (1){
        case 1: Rs100 = amount / 100;
            printf("No. of 100 Rupees = %d\n", Rs100);
            amount = amount % 100;

        case 2: Rs50 = amount / 50;
            printf("No. of 50 Rupees = %d\n", Rs50);
            amount = amount % 50;

        case 3: Rs20 = amount / 20;
            printf("No. of 100 Rupees = %d\n", Rs20);
            amount = amount % 20;

        case 4: Rs1 = amount / 1;
            printf("No. of 100 Rupee = %d\n", Rs1);
            amount = amount % 1;
    }

    return 0;
}