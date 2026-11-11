// array as function argument ( with base value (address));
#include<stdio.h> 
void fun1(int *arr){
    for(int i = 0; i<11;i++){
     printf("%d \n",*(arr+i));   
    }
    arr[0] = 234;   //value change 
}
int fun2(int arr[]){
    for(int i =0;i<11;i++){
        printf("%d \n",arr[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,7,6,5};
    fun1(arr); // first function call
    fun2(arr);
}