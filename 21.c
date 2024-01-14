//Write a program to check whether a given number is divisible by 5 or no
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    if (a%5==0)
    {
     printf("divided by 5");

    }
    else
    {
        printf("not divided by 5");
    }
    return 0;
    
}