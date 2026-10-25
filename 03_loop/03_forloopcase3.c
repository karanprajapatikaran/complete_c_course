#include<stdio.h>
int main()
{  
    int i,j;                         
     // expression 2 in which two condition apply.but compiler target last condition only.like (j<3);
    for(i=0,j=0;i<15, j<5;i++,j++)
    {
        printf("%d %d\n",i,j);
    }
    return 0;
}