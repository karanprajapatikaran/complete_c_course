#include<stdio.h>     // very very important code....
int main(){
int arr[]= {311,52,3,4,5,6,67};
int* arrayptr = arr;
printf("Value at position 3 of the array is %d\n", arr[3]);
printf("The address of first element of the array is %d \n", &arr[0]);
printf("The address of first element of the array is %d \n", arr);
printf("The address of second element of the array is %d \n", &arr[1]);
printf("The address of second element of the array is %d \n", arr+1);
printf("The address of second element of kkk the array is %d \n", arrayptr++); // ess  mai arr++ direct nhi kiya pla hmnai uska pointer  banaya then  us pointer variable ka use kr ka  ++ ka use kiya 


// arr --; // this line will throw an error; 
//arr++; not directly allowed; array fixed hota h. hmm usa change nhi kr sktai...directly
  //arrayptr++     allowed...
printf("The address of second element of kkk the array is %d \n", arrayptr++);

printf("The value at address of first element of the array is %d \n", *(&arr[0]));
printf("The value at address of first element of the array is %d \n", arr[0]);
printf("The value at address of first element of the array is %d \n", *(arr));
printf("The value at address of second element of the array is %d \n", (&arr[1]));
printf("The value at address of second element of the array is %d \n", arr[1]);
printf("The value at address of second element of the array is %d \n", *(arr + 1));
}
