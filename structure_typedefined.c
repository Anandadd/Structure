#include<stdio.h>
typedef struct student
{
    int rollno;
    char name[20];
    float marks;
}student ;
void main ()
{
    student s={10,"jenny",65};
    printf("%d %s %f",s.rollno,s.name,s.marks);
}
/*
10 jenny 65.000000
Process returned 18 (0x12)   execution time : 0.062 s
Press any key to continue.*/
