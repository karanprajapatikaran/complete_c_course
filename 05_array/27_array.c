#include<stdio.h>
int main(){
    int marks[4] = {10,20,30,39};  // most popular example...........
    int c = 0;                     // sum and avg. all number........
    for(int i = 0;i<4;i++){
        c = c + marks[i];
    } printf("final answer is: %d \n",c);
      printf("final answer is: %d",c/marks[4]);

}