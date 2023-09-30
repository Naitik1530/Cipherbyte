#include<stdio.h>

void main ()
{
    int rollno;
    char name[30];
	float sub1,sub2,sub3;
	float per,avg;
	float total;

	printf("\nEnter the Student Roll Number : ");
	scanf("%d", &rollno);
    printf("\nEnter the Student Name : ");
    scanf("%s", &name);
	printf("Enter the marks of sub1 : ");
	scanf("%f", &sub1);
	printf("Enter the marks of sub2 : ");
	scanf("%f", &sub2);
	printf("Enter the marks of sub3 : ");
	scanf("%f", &sub3);
	total= sub1+sub2+sub3;
	printf("\nThe total mark : %.2f ",total);
	per = (total/300)*100;
	avg = (total/3);
	printf("\nThe percentage mark : %.2f ", per);
	printf("\nThe average mark : %.2f", avg);

	// Grade calculation
	if(per>=80)
	printf("\nGrade : A");
	else if(per>=60) printf("\nGrade : B");
	else if(per>=45) printf("\nGrade : C");
	else if(per>=35) printf("\nGrade : D");
	else if(per<35) printf("\nFail ");
}
