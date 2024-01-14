/*Write a program to check whether a given number is an even number or an odd 
number without using % operator*/
#include<stdio.h>
int main()
{ 
   int number;
   printf("enter a number to check even or odd");
   scanf("%d",&number);
   if((number& 1)==0)
   printf("%d is even.",number);
   else
   printf("%d is odd." , number);      
 return 0;

}
