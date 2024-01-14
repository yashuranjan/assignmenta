//Write a program which takes the cost price and selling price
// of a product from the 
//user Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    int cp,sp;
    float pro,loss;

    printf("enter the cost price and selling price=");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        printf("profit=%d",sp-cp);
        pro=((sp-cp)*100)/cp;
        printf("\nprofit percentag=%f",pro);
    }
    if(sp<cp)
    {
        printf("loss=%d",cp-sp);
        loss=((cp-sp)*100)/cp;
        printf("\nloss percentage=%f",loss);
    }

 return 0;
   
}