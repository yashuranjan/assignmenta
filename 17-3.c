//Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
   char str[20]="beautyful";
   char c[20]="aeiouAEIOU";
   int i,j,count=0;
   for ( i = 0; str[i]; i++)
   {
       for ( j = 0; c[j]; j++)
       {
           if (str[i]==c[j])
           {
               count++;
           }
           
       }
       
   }
   printf(" %d",count);
   return 0;
}