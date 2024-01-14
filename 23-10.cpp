#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,9,7,8,9,10};
    int sum=0,i;
    for ( i = 0; i <=9; i++)
    {
     sum=sum+a[i];
    }
    cout<<"the sum is "<<sum;
   return 0;
}