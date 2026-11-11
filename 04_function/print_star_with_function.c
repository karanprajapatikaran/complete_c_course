#include <stdio.h>
int fun1(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int fun2(int b)
{
    for (int i = 0; i < b; i++)
    {
        for (int j = i; j < b; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a, b;
    int num;
    printf("Enter 0 for triangle, 1 for reverse triangle");
    scanf("%d", &num);
    switch (num)
    {
    case 0:
        printf("enter a value: ");
        scanf("%d", &a);
        fun1(a);
        break;
    case 1:
        printf("enter a value: ");
        scanf("%d", &b);
        fun2(b);
        break;
    default:
        printf("invalide value:");
    }
}