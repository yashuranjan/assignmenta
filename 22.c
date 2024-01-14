/*Write a program to check whether a given number is an even number or an odd 
number.*/
#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("nuber is even");
    }
    else
    {
        printf("number is odd");
    }
return 0;
}