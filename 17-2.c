//Write a program to count the occurrence of a given character in a given string.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[10] = "princess";
    int i ,count;
    for ( i = 0; str[i]; i++)
    {
        if (str[i]=str[10])
        {
            count++;
        }
        
    }
    printf(" %d",count);
 return 0;
}  
#include<stdio.h>
#include <string.h> 
int main()
{
    char s[1000],c;  
    int i,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
     
	printf("character '%c' occurs %d times \n ",c,count);
 
 	 
     
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char str[10]="elephant";
    char c='e';
    int i,count=0;
    for ( i=0; str[i]; i++)
    {
      if (str[i]==c)
      {
          count++;
      }
      
    }
    printf(" %d",count);
    return 0;
}