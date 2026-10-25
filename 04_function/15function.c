#include<stdio.h>
int noo (){                  // without argument and with return value;
    int a,b,c;
    printf("enter a number:a ");
    scanf("%d",&a);
     printf("enter a number:b ");
    scanf("%d",&b);
    c = a+b;
    return c;
}
int main(){
    int c = noo();
    printf("%d",c);
}