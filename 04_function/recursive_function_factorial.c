#include<stdio.h>
int  karan(int number);
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    printf("final answer is: %d",karan(number));
} int karan(int number){
    if(number == 1 || number ==0){
        return 1;
    }else{
        return(number*karan(number - 1));
    }
}