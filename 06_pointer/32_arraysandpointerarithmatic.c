#include<stdio.h>
int main(){
int a = 34;
int*ptra = &a;
printf("print of adress: %d\n",ptra); // print address of ptra. means  adress od a...
printf("print of adress: %d\n",ptra+1);//ptra+1 means add size of int(1 int  size = 4.)..
printf("print of adress: %d\n",ptra+2); // ptra+2 means add size of int(2 int size = 8)..



// character ka liya...
char b = '3'; 
char*ptrb = &b;
printf("print of adress: %d\n",ptrb); // adress hmara 1 byte hi laita h 
printf("print of adress: %d\n",ptrb+1);
printf("print of adress: %d\n",ptrb+2);
}

// ***size of int depends architecture to architecture...