#include<stdio.h>
int main(){
  int arr[] = {1,20,3,6,45,6};
  int *arrkaran = arr;
  printf("value is:  %d \n",*arrkaran);
  *arrkaran++; //increment hoga
  printf("increment value is:  %d \n",*arrkaran);
  int c  = *arrkaran+4; // calculate hoga 
  printf("the calculation value is: %d",c);
} 