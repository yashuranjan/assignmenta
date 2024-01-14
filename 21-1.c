//Define a structure Employee with member variables id, name, salary.....
#include<stdio.h>
   struct employee
    {
        int id;
        char name[20];
        float salary;
    };
int main()
{
  struct employee b;
  printf("enter the id name and salary");
  scanf("%d",&b.id);
  fflush(stdin);
  fgets(b.name,20,stdin);
  scanf("%f",&b.salary); 
  return 0;
}
