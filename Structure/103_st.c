#include <stdio.h>
struct student        // structure define 
{
    int id;       //structure member like(id,rollno)
    int rollno; 
};
struct student karan, umesh, paras; // declared structure
int main()
{
    karan.id = 1001; // intialized stucture
    karan.rollno = 1;
    umesh.id = 0302;
    umesh.rollno = 2;
    paras.id = 66003;
    paras.rollno = 3;
    printf("karan id = %d \nkaran rollno = %d\n", karan.id, karan.rollno); // access value with help of (.)
    printf("umesh id = %d \numesh rollno = %d\n", umesh.id, umesh.rollno); //umesh = variable . rollno = structure member
    printf("paras id = %d \nparas rollno = %d\n", paras.id, paras.rollno);
}