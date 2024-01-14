#include<stdio.h>
int main()
{
    char str[20]="BITTU";
    int i;
    for ( i = 0; str[i]; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        printf("%c",str[i]);
    }
    return 0;
}