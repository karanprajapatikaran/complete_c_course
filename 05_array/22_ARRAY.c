#include<stdio.h>         //one - D array  print 
int main(){
    int marks[6];
    for(int i = 0;i<=5;i++){
        printf("please enter  value: \n");
        scanf("%d",&marks[i]);
    }for(int i = 0;i<=5;i++){
        printf(" index %d value is: %d \n ",i,marks[i]);
    }
}