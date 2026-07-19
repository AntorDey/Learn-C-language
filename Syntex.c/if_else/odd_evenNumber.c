#include<stdio.h>
int main(){
    int x;
    printf("Enter number: ");
    scanf("%d", &x);

    if(x%2==0){
        printf("%d is Even number ", x);

     }else{
         printf("%d is Odd number ", x);
    }
return 0;

}
// #include <stdio.h>

// int main()
// {
//     int num;

//     // Ask user for input
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Condition to check if the number is perfectly divisible by 2
//     if (num % 2 == 0)
//     {
//         printf("%d is even.\n", num);
//     }
//     else
//     {
//         printf("%d is odd.\n", num);
//     }

//     return 0;
// }
