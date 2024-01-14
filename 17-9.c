#include<stdio.h>
int main()
{
    char str[20]="yashuranjan";
    int i,j,temp=0;
    for ( i = 0; str[i]; i++)
    {
      for ( j=i+1; str[j-1]; j++)
      {
          if (str[i]<=str[j])
          {
              temp=str[i];
              str[i]=str[j];
              str[j]=temp;
          }
          
      }
      
    }
    printf( "%c",str[i]);
    return 0;
}