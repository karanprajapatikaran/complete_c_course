#include<stdio.h>
int marks(int number){ // recursive with Fibonacci.....
    if(number == 0){
        return 0;
    }else if(number == 1){
        return 1;
    }
    else{
        return(marks(number - 1) + marks(number -2) );
    }
}
int main(){
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    printf("%d",marks(number));
}