#include<stdio.h>
int main(){
   int karan[4] = {1,4,5,3};
   int sum = 0;
   for(int i = 0;i<4;i++){
      sum = sum + karan[i];
      }printf("%d",sum);
      float c = (sum/4);
      printf("\n");
      printf("%f",c);
}