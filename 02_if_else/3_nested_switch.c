#include<stdio.h>

int main()
{
    int item;

    printf("check electronics item enter 1\n");
    printf("check other item enter 2: ");
    scanf("%d", &item);

    switch(item)
    {
        case 1:
        {
            int a;

            printf("check mobile click 1\n");
            printf("check washing machine click 2: ");
            scanf("%d", &a);

            switch(a)
            {
                case 1:
                    printf("mobile");
                    break;

                case 2:
                    printf("washing machine");
                    break;

                default:
                    printf("invalid choice");
            }
            break;
        }

        case 2:
            printf("other item");
            break;

        default:
            printf("invalid item");
    }

    return 0;
}