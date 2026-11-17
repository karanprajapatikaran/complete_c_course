#include<stdio.h>

// Temporary variable: swapping ke time ek value ko temporarily store karega
int temp;

// Function array ko reverse karne ke liye
// arr[] mein original array ka address receive hota hai
void fun1(int arr[]){

    // i = 0 se 2 tak chalega
    // 6/2 = 3, isliye sirf 3 baar swapping hogi
    for(int i = 0; i < 6/2; i++){

        // Step 1: Left side ki value temp mein store karo
        temp = arr[i];

        // Step 2: Right side ki value left side mein daalo
        arr[i] = arr[5-i];

        // Step 3: Temp ki purani value right side mein daalo
        arr[5-i] = temp;

        // Is tarah dono positions ki values swap ho jaati hain
    }
}

int main(){

    // Original array: 6 elements
    int arr[] = {1,2,3,4,5,6};

    // Function call se pehle array print kar rahe hain
    for(int i = 0; i < 6; i++){

        // i = index hai, actual memory address nahi
        // arr[i] = us index par stored value
        printf("Index = %d and Value = %d\n", i, arr[i]);
    }

    // Array ka address function ko pass ho raha hai
    // Isliye function original array mein changes karega
    fun1(arr);

    // Function call ke baad updated array print kar rahe hain
    for(int i = 0; i < 6; i++){

        // Ab reversed array ki values print hongi
        printf("Index = %d and Value = %d\n", i, arr[i]);
    }

    return 0;
}