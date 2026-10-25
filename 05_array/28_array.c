#include<stdio.h>
int main(){
  int found = 0;                    // find number in array. with linear search......
  int marks[5]={1,2,3,4,5};
  int a;
  printf("enter a number: ");
  scanf("%d",&a);
  for(int i = 0;i<5;i++){
    if(a == marks[i]){
      found = 1;
      break; 
      
    }
  }if(found == 1 ){
    printf("number found %d",a);
  }else{
    printf("no number found");
  }
  
}