#include <stdio.h>

int main(){
    int a, b;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    char op;
    printf("Enter the Operation you want to perform\n");
    scanf(" %c", &op);     // c ke pehle space dalna tha to avoid error

    switch (op){
        case '+': printf("%d", a+b);            
            break;

        case '-': printf("%d", a-b);
            break;

        case '*': printf("%d", a*b);
            break;

        case '/': printf("%d", a/b);
            break;

        case '%': printf("%d", a%b);
            break;

        default: printf("Please enter a valid operation\n");
    }

    return 0;
}