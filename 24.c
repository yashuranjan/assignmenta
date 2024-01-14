//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    if(a/1000==0)
    {
        printf("the number are of three digit");

    }
    else
    {
        printf("the number are not three digit");
    }
    return 0;

}