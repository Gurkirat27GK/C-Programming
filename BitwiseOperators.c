#include <stdio.h>

int main(){
    int a = 4;
    int b = 6;

    printf("%d\n", a&b);     // AND
    printf("%d\n", a|b);     // OR
    printf("%d\n", ~a);      // NOR
    printf("%d\n", a^b);     // XOR

    printf("%d\n", 17>>1);     // Right Shift
    printf("%d\n", 17>>2);
    printf("%d\n", 19<<1);     // Left Shift
    printf("%d\n", 19<<2);

    int i = 7;
    printf("%d\n", ++i);     // Pre increment
    printf("%d\n", i++);     // Post increment
    printf("%d\n", i--);
    printf("%d\n", --i);

    return 0;
}