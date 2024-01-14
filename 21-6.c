#include<stdio.h>
#include<string.h>
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
struct employee input()
{
  struct employee b;
  printf("enter the id name and salary");
  scanf(" %d",&b.id);
  fflush(stdin);
  fgets(b.name,20,stdin);
  scanf("%f",&b.salary);
  return b;
}
void sortsalary(struct employee b[],int n)
{
    int i,j;
    struct employee temp;
    for ( i=0; i<=n-1; i++)
    {
        for (j=0; j <n-1-i; j++)
        {
            if (strcmp(b[i].name,b[i+1].name)>0)
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
    struct employee b[5];
    int i;
    for (i=0;i<=4;i++)
    {
      b[i]=input();
    }
    sortsalary(b,5);
    for ( i=0; i<=4; i++)
    {
        display(b[i]);
    }
 return 0;
    
}