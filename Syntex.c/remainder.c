#include<stdio.h>
int main(){
    int a,b;  //a>b
    printf("Enter Dividend: ");
    scanf("%d",&a);

    printf("Enter Divisor: ");
    scanf("%d",&b);

    //int q = a/b;
    int r = a%b;  //diviser*quotuent+remainder= divident.
    printf("The remainder is : %d",r);  //using mod operator

        return 0;

    }