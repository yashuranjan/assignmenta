#include<stdio.h>
int main()
{
    char str[20]="bittu";
    int i;
    for ( i = 0; str[i]; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        printf("%c",str[i]);
    }
    return 0;
}