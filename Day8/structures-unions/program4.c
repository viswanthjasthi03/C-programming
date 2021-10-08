//Write a program to read and print an Employee’s details using Structure.Use array of structures and pointer to the array of structures concepts.

#include<stdio.h>
#include<string.h>
struct student
{
int id;
char name[20];
float score;
}student[10];

int main()
{
int i;
//Reading and printing the values in the array structures
for(i=0;i<2;i++)
{
printf("Record %d\n",i+1);
printf("Enter the %d student id=",i+1);
scanf("%d",&student[i].id);
printf("Enter the name of %d student=",i+1);
scanf("%s",&student[i].name);
printf("Enter the score of %d student=",i+1);
scanf("%f",&student[i].score);
}
for(i=0;i<2;i++)
{
printf("\nRecord %d\n",i+1);
printf("The id of  %d student=%d\n",i+1,student[i].id);
printf("The name of %d student=%s\n",i+1,student[i].name);
printf("The score of %d student=%f\n",i+1,student[i].score);
}
	//Reading and printing the values in the pointer to the array of structures
struct student *ptr=student;
int j;
for(j=0;j<2;j++)
{
printf("Record %d\n",j+1);
printf("The id of  %d student=%d\n",j+1,ptr->id);
printf("The name of %d student=%s\n",j+1,ptr->name);
printf("The score of %d student=%f\n",j+1,ptr->score);
ptr++;
}
return 0;
}
