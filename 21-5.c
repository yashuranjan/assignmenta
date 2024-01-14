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
void sortname(struct employee b[],int n)
{
    int i,j;
    struct employee temp;
    for ( i=0; i<=n-1; i++)
    {
      for ( j=1; j<=n-1-i; j++)
      {
          if ( b[i].name>b[i+1].name)
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
  for (int i=1; i<=10; i++)
  {
      printf("enter the id name salary");
      scanf(" %d",&b[i].id);
      fflush(stdin);
      fgets(b[i].name,20,stdin);
      scanf("%f",b[i].salary);
      sortname(b,10);
      display(b[i]);
      return 0;
  }
}