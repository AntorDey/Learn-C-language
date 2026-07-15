#include<stdio.h>
int main (){
    float x;
    printf("Enter a Decimal number: ");
    scanf("%f",&x);
    int y = x;
    float z= x -y;
    printf("Fraction part is: %.3f", z);
}

//problem: print the frection number .