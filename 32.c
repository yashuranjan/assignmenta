 //Write a program to check whether a given year is a leap year or not
 #include<stdio.h>
 int main()
 {
    int x;
    printf("enter the year:");
    scanf("%d",&x);
    if(x%400==0 || x%4==0 && x%100!=0)
    {
        printf("leap year");
    }
    else
    {
    printf("not leap year");
    }
    return 0;

 }