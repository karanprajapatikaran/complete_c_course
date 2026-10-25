#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    
    for(int i = 0; i<a;i++){
        printf("karan \n");
      for(int k = 1;k <a;k++){
        printf("umesh \n");
        goto icecreme;   //  goto use for flow code jump another.
      }
    }
   icecreme:;
}