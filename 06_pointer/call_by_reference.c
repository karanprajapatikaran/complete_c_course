#include<stdio.h>
 void karan(int*x,int*y){  // void not return value. internal change apply
    int temp;
    temp = *x;
    *x = *y;          //x change to y.
    *y = temp;     // y change to x.
    return;
}
int main(){
    int a = 20;
    int b = 10;
    printf("the a is %d and b is %d",a,b);
    karan(&a,&b);                           // send address copy
    printf("\n the a is %d and b is %d",a,b);
}