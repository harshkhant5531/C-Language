 #include<stdio.h>
 void main()
 {
     int a,b;
    char choice;
     printf("Enter choice(+,-,*,/) : ");
     scanf("%c",&choice);
     printf("Enter two numbers: ");
     scanf("%d %d",&a,&b);
     if(choice=='+')
     {
          printf("The addition of two numbers is : %d\n",a+b);
     }
     else if(choice=='-')
     {
         printf("The subtraction of two numbers is : %d\n",a-b);
     }
   else if(choice=='*')
     {
         printf("The multiplication of two numbers is : %d\n",a*b);
     }
     else if (choice=='/')
     {
         if (b==0)
         {
             printf("Division is not possible");
         }
         else
         {
         printf("The division of two numbers is : %d\n",a/b);
         }
      
     }
 }



// #include<stdio.h>
// void main(){
// 	int a,b;
// 	char choice;
// 	printf("Enter choice(+,-,*,/):");
// 	scanf("%c",&choice);
// 	printf("Enter a");
// 	scanf("%d",&a);
// 	printf("Enter b");
// 	scanf("%d",&b);
	
// 	if (choice=='+')
// 	{
// 		printf("Addition of a and b is:%d",a+b);
// 	}
// 	else if (choice=='-')
// 	{
// 		printf("Subtraction of a and b is:%d",a-b);
// 	}
// 	else if (choice=='*')
// 	{
// 		printf("Multiplication of a and b is:%d",a*b);
// 	}
// 	else if (choice=='/')
// 	{
// 		if (b==0)
// 		{
// 			printf("It is not divisible");
// 		}
// 		else
// 		{
// 			printf("Division of a and b is:%d",a/b);
// 		}
// 	}
	
// }
