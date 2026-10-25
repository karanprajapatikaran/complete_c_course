#include<stdio.h>
int main(){
    int a;                          //factorial calculate program.
    printf("enter a number: ");
    scanf("%d",&a);
    int c = 1;
    for(int i = 1;i<=a;i++){
        c = i*c;
    }
    printf("final answer is: %d",c);
}