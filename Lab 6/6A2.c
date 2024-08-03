#include<stdio.h>
void main()
{
    float basic_salary,hra,da,gross_salary;
    printf("Enter the basic_salary of an employee: ");
    scanf("%f",&basic_salary);
    if(basic_salary>=10000)
    {
        hra=0.2*basic_salary;
        da=0.8*basic_salary;
    }
    else if(basic_salary>=20000)
    {
        hra=0.25*basic_salary;
        da=0.90*basic_salary;
    }
    else if(basic_salary>=30000)
    {
        hra=0.30*basic_salary;
        da=0.95*basic_salary;
    }
    gross_salary=basic_salary+hra+da;
	printf("gross_salary:%f",gross_salary);
}