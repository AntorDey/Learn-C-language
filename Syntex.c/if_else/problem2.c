#include<stdio.h>
int main(){
    int x;
    printf("Submit the year: ");
    scanf("%d",&x);
    if(x%4==0){
        printf("This is leap year");
    }else{
        printf("not leap year");
    }
    return 0;
}