#include<stdio.h>
int main(){                          //popular example....
    int marks[4] = {10,70,30,40};       // find greater value...
    int max = marks[0];
    for(int i = 0;i<4;i++){
        if(  marks[i]>max){
            max  = marks[i];
        }
    }        printf("%d",max);

}