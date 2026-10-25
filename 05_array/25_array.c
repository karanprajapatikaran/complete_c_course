#include<stdio.h>
int main(){
   int karan[2][4];
   for(int i = 0;i<2;i++){
      for(int j = 0;j<4;j++){
          printf("enter a number: ");
          scanf("%d",&karan[i][j]);
      }
   }
   for(int i = 0;i<2;i++){
      for(int j = 0;j<4;j++){
         printf("{%d}",karan[i][j]);
      }printf("\n");
   }
}