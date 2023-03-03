#include <stdio.h>

int max(int a, int b, int c){
    if (a > b && a > c){
        return a;
    }

    else if (b > a && b > c)
    {
        return b;
    }

    else
    {
        return c;
    }
}

int check(int x, int y, int z){
    int max1 = max(x, y, z);

    if(max1 == x)
    {
        if(x*x == y*y + z*z)
        {
           return 1; 
        }
        else
        {
            return 0;
        }
    }
    else if (max1 == y)
    {
        if(y*y == x*x + z*z)
        {
           return 1; 
        }
        else
        {
            return 0;
        }

    }
    else
    {
        if(z*z == y*y + x*x)
        {
           return 1; 
        }
        else
        {
            return 0;
        }

    }
}

int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (check(x, y, z) == 1){
        printf("Pythagorean Triplet");
    }

    else if(check(x, y, z) == 0){
        printf("Not a Pythagorean Triplet");
    }

    return 0;
}