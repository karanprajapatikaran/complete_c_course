#include<stdio.h>
struct student{
    int id;
    int rollno;
};

typedef struct student ss;
 ss karan,umesh;
int main(){
    karan.id = 101010;
    karan.rollno = 1;
    umesh.id = 192837;
    umesh.rollno = 2;
    printf(" karan id is %d and karan rollno is %d\n  ",karan.id,karan.rollno);
    printf(" umesh id is %d and umesh rollno is %d",umesh.id,umesh.rollno);
}