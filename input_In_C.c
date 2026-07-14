#include<stdio.h>
int main(){
    float redius;
    printf("Enter redius:");
    scanf("%f",&redius);
    float pi = 3.1416;
    float area = pi * redius*redius;
    printf("Area of circle: %f",area);

    return 0;
}