#include<stdio.h>
void fun(char name[]){
    int i = 0;
    while(name[i]!= 0){  
        printf("%c",name[i]);
        i++;
    }
    
}
int main(){
    char name[] = {'k','a','r','a','n','\0'}; // Use NULL at the end of an array 
    fun(name);
}