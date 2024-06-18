#include<stdio.h>

struct Student
{
    int RollNo;  //4
    int Age;      //4
    float salary;  //4
    char Division;  //1

};


int main()
{
    struct Student Amit;
    struct Student Pooja;

    printf("size of the object is:%d\n",sizeof(Amit));

    Amit.RollNo = 11;
    Amit.Division ="A";
    Amit.Age = 21;
    Amit.salary = 30000.00;

    Pooja.RollNo = 21;
    Pooja.Division = "c";
    Pooja.Age = 33;
    Pooja.salary = 17000.00;

    printf("age of the Amit:%d\n",Amit.Age);
    printf("salary of the Amit:%d\n",Amit.salary);

    printf("Age of the Pooja:%d\n",Pooja.Age);
    printf("salary of the Pooja:%d\n",Pooja.salary);
    return 0;

}