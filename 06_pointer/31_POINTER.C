#include <stdio.h>

int main() {
    printf("Lets learn about pointers\n");

    int a = 76;
    int *ptra = &a; 
    int *ptr2;      // no define null and other  variable( like &a),so *ptr2 return garbage value...

    printf("The address of pointer to a is %p\n", &ptra);  // address store of ptra
    printf("The address of a is %p\n", &a);                // address store  of a
    printf("The address stored in ptra is %p\n", ptra);    // address store is a

    printf("The address of some garbage is %p\n", ptr2);  //address store garbage value.

    printf("The value of a is %d\n", *ptra); // *ptra provide a value
    printf("The value of a is %d\n", a); // print value a...
    return 0;
}