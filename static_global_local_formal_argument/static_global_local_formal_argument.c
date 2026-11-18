#include<stdio.h>

int globalvar = 5; // global variable (poore program mai access kr skte h)

void fun1(int argument){ // formal argument (local variable ki tarah work krta h)

    int localvar = 5; // local variable (function call hone pr memory mai aata h or function end hone pr destroy ho jata h)

    static int stvariable = 10; // static variable (jab tak program work krta h tab tak memory mai rhaita h or apni value loss nhi krta, next function call mai purani value se hi start hota h)

    globalvar++;
    localvar++;
    stvariable++;
    argument++;

    printf("local %d | global %d | stvariable %d | argument: %d\n",
           localvar, globalvar, stvariable, argument);
}

int main(){
    fun1(5); // call 1
    fun1(5); // call 2
}