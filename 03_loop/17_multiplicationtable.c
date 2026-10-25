#include<stdio.h>
int main(){
    int a;
    printf("enter a table number: ");        //multiplication table program.
    scanf("%d",&a);
    for(int i = 1;i<=10;i++){
    int c = i*a;
    printf(" %d x %d = %d \n",i,a,c);
    }

}