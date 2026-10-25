#include<stdio.h>
int main(){
    int n;
    do{
    printf("enter a number: ");
    scanf("%d",&n);
    }
    while(n != 0);
    printf("loop stoped");
}