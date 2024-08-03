#include<stdio.h>
void main()
{
    float unit , ans;
    printf("Enter unit : \n");
    scanf("%f",&unit);
    if(unit<=50)
    {
        ans = 50*0.50;
    }
    else if(unit<=150)
    {
        ans = (50*0.50) + ((unit - 50)*0.75);
    }
    else if(unit<=250)
    {
        ans = (50*0.50) + (100*0.75) + ((unit - 150)*1.20);
    }
    else
    {
       ans = (50*0.50) + (100*0.75) + (100*1.50) + ((unit - 250)*1.50);
    }
    ans = (ans*0.20) + ans;
    printf("Electricity Bill : %f",ans);
}