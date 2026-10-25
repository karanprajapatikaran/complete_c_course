// WAP less and equal to 10 run loop.but greater then number 10 break loop.
#include<stdio.h>
int main(){
    int a,i;
    printf("enter a number: ");
    scanf("%d",&a);
    for(i = 1;i<=10;i++){
        printf("%d",i);
    if(a>11){
        break;
    }
    }

}