#include<stdio.h>
void main(){
	 int rollno[5],marks[5],i;
	 for(i=0;i<5;i++){
	 	printf("\n Enter the roll no of student[%d]", i+1);
	 	scanf("%d",&rollno[i]);
	 	printf("\n Enter the marks of student[%d]", i+1);
	 	scanf("%d",&marks[i]);
	 }
	 for(i=0;i<5;i++){
	 	printf("\n Roll no: %d Marks: %d",rollno[i],marks[i]);
	 }
}