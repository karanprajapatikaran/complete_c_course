#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    for(int i = 1;i<=a;i++){
        if(i%5 == 0)
        continue;
        if(i == 36)
        break;
        printf("%d \n",i);
    }
}