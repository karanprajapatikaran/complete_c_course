#include<stdio.h>
void fun(char name[]){
    int i = 0;
    while(name[i]!= 0){  
        printf("%c",name[i]);
        i++;
    }
    
}
int main(){
    char name[60];
    printf("enter string: ");
    gets(name); //gets() spaces ke saath poori line read karta ha Kyunki scanf("%s", name) space aane par input lena band kar deta hai.
    fun(name); //Problem: Ismein array ki size check nahi hoti. Agar array 30 characters ka hai aur user 100 characters enter kar de, toh buffer overflow ho sakta hai.
}              //fgets() use karo.