#include<stdio.h>
int temp;
void fun1(int arr[]){
    for(int i = 0;i<6/2;i++){
        temp = arr[i];
        arr[i] = arr[5-i];
        arr[5-i] = temp;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    for(int i = 0; i<6;i++){
        printf("the address is %d anndn value is %d \n",i,arr[i]);
    }
    fun1(arr);
    for(int i = 0;i<6;i++){
    printf("the address is %d anndn value is %d \n",i,arr[i]);
    }
}