#include<stdio.h>
int main()
{
    char a[20]="bittu";
    char b[20];
    int i;
    for ( i = 0; a[i]; i++)
    {
        b[i]=a[i];
    }
    printf(" %s",b);
    return 0;
}