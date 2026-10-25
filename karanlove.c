#include<stdio.h>

int main()
{
    int A;

    printf("enter a number");
    scanf("%d", &A);

    if(A >= 90)
    {
        printf("A");
    }
    else if(A >= 70)
    {
        printf("B");
    }
    else if(A >= 60)
    {
        printf("C");
    }
    else
    {
        printf("false");
    }
    
}