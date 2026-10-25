#include<stdio.h>
int umesh(int a ,int b);   // function declared prototype.
int main(){
    int a,b;
    printf("enter number a: \n");
    scanf("%d",&a);
    printf("enter number b: \n");
    scanf("%d",&b);
    int c = umesh(a,b);
    printf("%d",c);
}
int umesh(int a ,int b){                
    return a+b;
}