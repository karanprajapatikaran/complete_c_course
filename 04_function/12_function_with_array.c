// array as function argument 
#include<stdio.h>
int fun1(int arr[]){
    for(int i = 0; i<11;i++){
     printf("%d \n",arr[i]);   
    }
    arr[0] = 234;    // change value in actual paramenter with help address
}
int fun2(int arr[]){
    for(int i =0;i<11;i++){
        printf("%d \n",arr[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,7,6,5};
    fun1(arr); 
    fun2(arr);
}