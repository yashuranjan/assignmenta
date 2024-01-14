//Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct  employee 
{
    int id;
    char name[20];
    float salary;
};
void display(struct employee b)
{
    printf(" %d %s  %f ",b.id,b.name,b.salary);
}
int main()
{
   struct employee b;
    printf("enter the id name and salary");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,20,stdin);
    scanf("%f",&b.salary);
    display(b);
    return 0;
}
