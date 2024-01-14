//Write a program to make the last digit of a number stored in a variable as zero. 
//(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number=");
    scanf("%d",&a);
    b=a/10;
    c=b*10;
    printf("%d",c);
    return 0;
}