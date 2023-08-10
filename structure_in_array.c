#include<stdio.h>
struct student{
int rollno;
char name[5];
float marks;
};
void main()
{
    int i;
    struct student  s[3];
    for(i=0;i<3;i++)
    {
        scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].marks);
    }
    for(i=0;i<3;i++)
    {
        printf("%d  %s  %f\n",s[i].rollno,s[i].name,s[i].marks);
    }
}
/*4
anand
90
5
raja
92
6
dezy
78
4  anand  90.000000
5  raja  92.000000
6  dezy  78.000000

Process returned 19 (0x13)   execution time : 79.773 s
Press any key to continue.*/
