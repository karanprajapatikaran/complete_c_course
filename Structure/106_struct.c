#include <stdio.h>
struct driver
{
    char name[20];
    char DL_no[20];
    int kms;
} d1, d2, d3;
int main()
{
    printf("enter driver  detail: \n");


    printf("enter d1 name : ");
    scanf("%s", &d1.name);
    printf("enter d1 DL_no : ");
    scanf("%s", &d1.DL_no);
    printf("enter d1 kms : ");
    scanf("%d", &d1.kms);

    printf("enter d2 name : ");
    scanf("%s", &d2.name);
    printf("enter d2 DL_no : ");
    scanf("%s", &d2.DL_no);
    printf("enter d2 kms : ");
    scanf("%d", &d2.kms);

    printf("enter d3 name : ");
    scanf("%s", &d3.name);
    printf("enter d3 DL_no : ");
    scanf("%s", &d3.DL_no);
    printf("enter d3 kms : ");
    scanf("%d", &d3.kms);

    printf("name = %s |DL_NO = %s|kms = %d\n ", d1.name, d1.DL_no, d1.kms);
    printf("name = %s |DL_NO = %s|kms = %d \n", d2.name, d2.DL_no, d2.kms);
    printf("name = %s |DL_NO = %s|kms = %d \n", d3.name, d3.DL_no, d3.kms);
}