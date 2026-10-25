#include <stdio.h>
int karan(int num)
{
    if (num == 1 || num == 0)           // factorial with function....
    {
        return 1;
    }
    else
    {
        int c = (num * karan(num - 1));
        return c;
    }
}
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("answer is %d :", karan(num));
}
