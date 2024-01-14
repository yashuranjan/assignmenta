//Write a program to find the greatest among three given numbers. Print number once 
//if the greatest number appears two or three times
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>b)
    {
        printf("a is greater=%d",a);
    }
    if(b>a&&b>c)
    {
        printf("b is greater is=%d",b);
    }
    if(c>a&&c>b)
    {
        printf("c is greater=%d",c);
    }
  return 0;
}
 
