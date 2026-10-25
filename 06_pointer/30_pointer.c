#include <stdio.h>

int main() {
    printf("Lets learn about pointers\n");

    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;   // null pointer provie only 0000000. no ddefine null provide garbage value.....

    printf("The address of pointer to a is %p\n", &ptra);  // address of ptra
    printf("The address of a is %p\n", &a);                // address of a
    printf("The address stored in ptra is %p\n", ptra);    // address store a;

    printf("The address of some garbage is %p\n", ptr2);  // address of ptr2 like null....

    printf("The value of a is %d\n", *ptra);   // value of a 
    printf("The value of a is %d\n", a);       // value of a

    return 0;
}