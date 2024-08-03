#include<stdio.h>
int main(){
    int month = 12, year = 2012;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("Number of days is 31 days.");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("Number of days is 30 days.");
        break;

        case 2:
        if ((year%400==0)||(year%100!=0)&&(year%4==0))
        {
            printf("Number of days is 29");
        }
        else
        {
            printf("Number of days is 28");
            break;
        }
    default;
    printf("Invalid month");
    break;
    }
}