#include<stdio.h>
int main(){
  int i;
  printf("enter a number: ");
  scanf("%d",&i);
  for(int z = 1;z<= i;z++){
   if(z%2==0){
   printf("%d \n",z);
   }
  }
}