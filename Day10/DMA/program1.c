//Write a C program to store ‘n’ student records entered by user.  allocate memory dynamically using malloc()/calloc() function and print the records grade level(based on percentage)

#include<stdio.h>
#include<string.h>
struct student
{
int id;
char name[30];
float percentage;
}student;
int main()
{
struct student *ptr=&student;
int i,n;
printf("Enter the number of student:");
scanf("%d",&n);
ptr=(struct student *) malloc (n*sizeof(struct student));
for(i=0;i<n;i++)
{
printf("Record %d",i+1);
printf("\nEnter the id of student=");
scanf("%d",&(ptr+i)->id);
printf("\nEnter the name of student=");
scanf("%s",&(ptr+i)->name);
printf("\nEnter the percentage of student=");
scanf("%f",&(ptr+i)->percentage);
}
printf("Id \t Name \t Percentage \t Remarks\n");
for(i=0;i<n;i++)
{
if((ptr+i)->percentage>=75 )
{
printf("%d\t",(ptr+i)->id);
printf("%s\t",(ptr+i)->name);
printf("%f%\t",(ptr+i)->percentage);
printf("Distinction\n");
}
}
for(i=0;i<n;i++)
{
if((ptr+i)->percentage>60 && (ptr+i)->percentage<75)
{
printf("%d\t",(ptr+i)->id);
printf("%s\t",(ptr+i)->name);
printf("%f%\t",(ptr+i)->percentage);
printf("First Grade\n");
}
}
for(i=0;i<n;i++)
{
if((ptr+i)->percentage>50 && (ptr+i)->percentage<60)
{
printf("%d\t",(ptr+i)->id);
printf("%s\t",(ptr+i)->name);
printf("%f%\t",(ptr+i)->percentage);
printf("Second Grade\n");
}
}
for(i=0;i<n;i++)
{
if((ptr+i)->percentage>40 && (ptr+i)->percentage<50)
{
printf("%d\t",(ptr+i)->id);
printf("%s\t",(ptr+i)->name);
printf("%f%\t",(ptr+i)->percentage);
printf("Third Grade\n");
}
}
for(i=0;i<n;i++)
{
if((ptr+i)->percentage<40)
{
printf("%d\t",(ptr+i)->id);
printf("%s\t",(ptr+i)->name);
printf("%f%\t",(ptr+i)->percentage);
printf("Fail\n");
}
}
}
