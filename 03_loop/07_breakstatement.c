#include<stdio.h>
int main (){
    int a;
    printf("enter a value: ");
    scanf("%d",&a);
    switch(a){         // if else alternative....
        case 1:
            printf("value is 1");
            break;
        case 2:
            printf("value is 2");
            break;
        case 3:
            printf("value is 3");
            break;
        default:
            printf("value is not match");
        
    }
}