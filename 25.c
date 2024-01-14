//Write a program to print greater between two numbers. Print one number of both are 
//the same
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number=");
    scanf("%d%d",&a,&b);
    if(a<b)
    {

        printf("this number is big=%d",b);
    }
    if(a>b)
    {
     printf("this number is big=%d",a);
    }
    if(a==b)
    {
        printf("equal to");
    }
    return 0;
}

