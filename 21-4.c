//Write a function to find the highest salary employee from a given array of 10
//employees.....
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
void display(struct employee b)
{
    printf("%d %s %f",b.id,b.name,b.salary);
}
void sortsalary(struct employee b[],int n)
{
    int i,j;
    struct employee temp;
    for ( i=1; i<=n-1; i++)
    {
      for (j=0; j<=n-1-i; j++)
      {
        if(b[i].salary>b[i+1].salary)
        {
            temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
        }
        
      }
      
    }
    
}
int main()
{
    struct employee b[10];
    for(int i = 0; i <=10; i++)
    {
       printf("enter the id name and salary");
       scanf("%d",&b[i].id);
       fflush(stdin);
       fgets(b[i].name,20,stdin);
       scanf("%f",&b[i].salary);
       display(b[i]);
       sortsalary(b,10);
       display(b[i]);
       return 0;
    }
    
}