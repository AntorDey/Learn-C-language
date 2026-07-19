#include<stdio.h>
int main(){
    int x = 5;
    int y = 3;
    int temp = x;

    x = y;
    y = x;
    y = temp;

    printf("Your input number is x = %d and y = %d\n"  , y ,x );
    printf("**Your swaping number is x = %d and y = %d", x, y);

    return 0;
}