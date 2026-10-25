#include<stdio.h>
int main(){
    int i =1;
    int sum =0;
    int a;
    printf("enter a value: ");
    scanf("%d",&a);
    while(i<=a){
     sum = sum + i; 
     i++;
    } 
    printf("%d",sum);
}