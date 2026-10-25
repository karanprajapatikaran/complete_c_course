#include <stdio.h>
int main()              // unnserstanding clear formate spacifier.... ..
{
    char match;
    printf("conert kms to miles click A ya a:\n ");
    printf("conert inche  to foot click B ya b: \n");
    scanf(" %c", &match);
    float A, a, b, B;
    if (match == 'A' || match == 'a')
    {
        printf("enter a value: ");
        scanf("%f", &a);
        float c = a * 0.621371;
        printf("the value is: %f", c);
    }
    else if (match == 'B' || match == 'b')
    {
        printf("enter a value: ");
        scanf("%f", &b);
        float d = b / 12;
        printf("the final value is: %f", d);
    }else{
        printf("invalide value");
    }
}