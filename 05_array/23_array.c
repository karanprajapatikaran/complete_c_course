#include <stdio.h>
int main()
{
    int marks[] = {12, 2, 3, 34, 344, 56};   //declaration and initilization in one line ...
    for (int i = 0; i <= 5; i++)               //[] bracket is empty in one -D array  is allowed. but not allowed 2-D array....
    {
        printf("value is arrya is %d \n",marks[i]);
    }
}