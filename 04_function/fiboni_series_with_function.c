#include<stdio.h>
int karan(int n){
    if(n == 1 || n == 2){
        return n -1;
    }else{
        return(karan(n-1)+karan(n-2));
    }
}
int umesh(int n ){
        int a = 0;
        int b = 1;
    for(int i = 0; i<n-1;i++){
        b = a+b;
        a = b-a;
    }return a;
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("final value with karan function  is: %d \n",karan(num));
    printf("final value with umesh function  is: %d",umesh(num));
}