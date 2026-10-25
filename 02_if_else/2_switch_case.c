#include<stdio.h>
int main(){
    int day;
    printf("enter a number: 1 to 4: ");
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("holiday");
        break;
        case 4:
        printf("no holiday");
        break;
        default:
        printf("invalide number: ");
    }
}