// Write a program to check whether roots of a given quadratic equation are real & 
// distinct, real & equal or imaginary roots.

#include<stdio.h>
int main()
{
 int a,b,c,d;
 float x,y;
 printf("enter the conficent= ");
 scanf("%d%d%d",&a,&b,&c);
 d=b*b-4*a*c;
 if(d<0)
 {
     printf("both rot are imaginary ");
 } 
 if(d==0)
 {
    printf("both root are equal=");
    x=b/(2.0*a);
    printf("root is %f",x);  
 }
 if(d>0)
 {
     printf("root are real and district");
     x=(-b+sqrt(d))/(2*a);
     y=(-b-sqrt(d))/(2*a);
     printf("\n root are:%f,%f",x,y);
 }
 return 0;
}    