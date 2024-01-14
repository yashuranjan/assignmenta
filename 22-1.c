#include<stdio.h>
void input(int*,int);
void display(int*,int);
int main()
{
    int a[5];
    input(a,5);
    display(a,5);
    printf("\n");
    return 0;
}
void display(int *p,int size)
{
    int i;
    for ( i=0; i<size; i++)
    {
      printf("   %d",p[i]);
    }
    
}
void input(int *p,int size)
{
    int i;
    printf("enter %d number=",size);
    for ( i=0; i<size; i++)
    {
        scanf("%d",&p[i]);
    }
    
}