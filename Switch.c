#include <stdio.h>

int main(){
    char ch = '1';
    int num = 1;

    printf("\n");
    switch (ch){
        case 1: printf("First\n");
                printf("First again\n");
                break;

        case '1': switch (num){
            case 1: printf("Value of num is %d\n", num);
            break;
        }
        break;

        default: printf("It is default case\n");
    }

    return 0;
}