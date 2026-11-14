
#include <stdio.h>

union test
{
    int id;
    int rollno;
    char grade;
} karan, umesh;
// Two separate union memory hogi, ek karan ki or ek umesh ki.
// Dono ki memory 4 byte hogi (assuming int = 4 bytes). karan or umesh ki 8 byte hogi

int main()
{

    karan.id = 1001010; // Karan ki shared memory mein value store hogi = 4 bytes
    karan.grade = 111;  // Same memory mein previous value overwrite ho jayegi.
    karan.rollno = 2;   // Same memory mein last assigned member rollno hoga.
                        // Ab karan.rollno ki value valid hai, other members ko access karna reliable nahi hai.

    umesh.id = 143745; // Umesh ki apni shared memory mein value store hogi.
    umesh.grade = 'B'; // Same memory mein previous value overwrite ho jayegi.
    umesh.rollno = 1;  // Same memory mein last assigned member rollno hoga.
                       // Ab umesh.rollno ki value valid hai, other members ko access karna reliable nahi hai.

    printf("karan id = %d\n", karan.id);
    printf("karan grade = %d\n", karan.grade);
    printf("karan rollno = %d\n", karan.rollno); // correct output mila ga

    printf("umesh id = %d\n", umesh.id);
    printf("umesh rollno = %d\n", umesh.rollno); // correct output mila ga
    printf("umesh grade = %c\n", umesh.grade);
}
