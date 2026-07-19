#include<stdio.h>
int main (){
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    
    if(n>0){
        printf("%d is possitive",n);
    }else if(n<0){
        printf("%d is negetive",n);
    }else{
        printf("%d is Nutral",n);
    }

    }
