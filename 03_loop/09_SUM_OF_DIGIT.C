#include<stdio.h>
int main(){
    int a,nikl;int sum = 0;
    printf("enter a number: ");
    scanf("%d",&a);
    while(a>0){
     nikl = a%10;
     sum = sum + nikl;
     a = a/10;
    } 
    printf("%d",sum);
}