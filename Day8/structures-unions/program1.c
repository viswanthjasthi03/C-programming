/*Write a C program to keep records and perform statistical analysis for a
class of 5 students. The information of each student contains: 
▪ RollNumber
▪ Name
▪ gender
▪ Exam Score. 
The program will prompt the user to choose the operation of records 
from a menu as shown below:*/

#include<stdio.h>
#include<string.h>
struct students
{
int rollnumber;
char name[20];
char gender[10];
int score;
};

int main()
{
struct students student[10];
int i,n;
for(i=0;i<5;i++)
{
printf("Record %d",i+1);
printf("\nEnter the rollnumber of %d student=",i+1);
scanf("%d",&student[i].rollnumber);
printf("\nEnter the name of %d student=",i+1);
scanf("%s",&student[i].name);
printf("\nEnter the gender of %d student=",i+1);
scanf("%s",&student[i].gender);
printf("\nEnter the score of %d student=",i+1);
scanf("%d",&student[i].score);
}
printf("Enter the menu=");
scanf("%d",&n);
switch(n)
{
	//Add student records
case 1:
for(i=0;i<5;i++)
{
printf("Record %d",i+1);
printf("\nEnter the rollnumber of %d student=",i+1);
scanf("%d",&student[i].rollnumber);
printf("\nEnter the name of %d student=",i+1);
scanf("%s",&student[i].name);
printf("\nEnter the gender of %d student=",i+1);
scanf("%s",&student[i].gender);
printf("\nEnter the score of %d student=",i+1);
scanf("%d",&student[i].score);
}
break;
 	//View all student records
case 2:
for(i=0;i<5;i++)
{
printf("\nRecord %d\n",i+1);
printf("The rollnumber is=%d\n",student[i].rollnumber);
printf("The name is=%s\n",student[i].name);
printf("The gender is=%s\n",student[i].gender);
printf("The score is=%d\n",student[i].score);
}
break;
	//Show student who gets the maximum score
case 3:
if(student[0].score>student[1].score && student[0].score>student[2].score && student[0].score>student[3].score && student[0].score>student[4].score)
{
printf("\nstudent who gets the maximum score is=\n");
printf("roolnumber=%d\n",student[0].rollnumber);
printf("name=%s\n",student[0].name);
printf("gender=%s\n",student[0].gender);
printf("score=%d\n",student[0].score);
}
else if(student[1].score>student[0].score && student[1].score>student[2].score && student[1].score>student[3].score && student[1].score>student[4].score)
{
printf("\nstudent who gets the maximum score is=\n");
printf("roolnumber=%d\n",student[1].rollnumber);
printf("name=%s\n",student[1].name);
printf("gender=%s\n",student[1].gender);
printf("score=%d\n",student[1].score);
}
else if(student[2].score>student[0].score && student[2].score>student[1].score && student[2].score>student[3].score && student[2].score>student[4].score)
{
printf("\nstudent who gets the maximum score is=\n");
printf("roolnumber=%d\n",student[2].rollnumber);
printf("name=%s\n",student[2].name);
printf("gender=%s\n",student[2].gender);
printf("score=%d\n",student[2].score);
}
else if(student[3].score>student[0].score && student[3].score>student[1].score && student[3].score>student[2].score && student[3].score>student[4].score)
{
printf("\nstudent who gets the maximum score is=\n");
printf("roolnumber=%d\n",student[3].rollnumber);
printf("name=%s\n",student[3].name);
printf("gender=%s\n",student[3].gender);
printf("score=%d\n",student[3].score);
}
else if(student[4].score>student[0].score && student[4].score>student[1].score && student[4].score>student[2].score && student[4].score>student[3].score)
{
printf("\nstudent who gets the maximum score is=\n");
printf("roolnumber=%d\n",student[4].rollnumber);
printf("name=%s\n",student[4].name);
printf("gender=%s\n",student[4].gender);
printf("score=%d\n",student[4].score);
}
break;
 	//Show student who gets the minimum score
case 4:
if(student[0].score<student[1].score && student[0].score<student[2].score && student[0].score<student[3].score && student[0].score<student[4].score)
{
printf("\nstudent who gets the minimum score is=\n");
printf("roolnumber=%d\n",student[0].rollnumber);
printf("name=%s\n",student[0].name);
printf("gender=%s\n",student[0].gender);
printf("score=%d\n",student[0].score);
}
else if(student[1].score<student[0].score && student[1].score<student[2].score && student[1].score<student[3].score && student[1].score<student[4].score)
{
printf("\nstudent who gets the minimum score is=\n");
printf("roolnumber=%d\n",student[1].rollnumber);
printf("name=%s\n",student[1].name);
printf("gender=%s\n",student[1].gender);
printf("score=%d\n",student[1].score);
}
else if(student[2].score<student[0].score && student[2].score<student[1].score && student[2].score<student[3].score && student[2].score<student[4].score)
{
printf("\nstudent who gets the minimum score is=\n");
printf("roolnumber=%d\n",student[2].rollnumber);
printf("name=%s\n",student[2].name);
printf("gender=%s\n",student[2].gender);
printf("score=%d\n",student[2].score);
}
else if(student[3].score<student[0].score && student[3].score<student[1].score && student[3].score<student[2].score && student[3].score<student[4].score)
{
printf("\nstudent who gets the minimum score is=\n");
printf("roolnumber=%d\n",student[3].rollnumber);
printf("name=%s\n",student[3].name);
printf("gender=%s\n",student[3].gender);
printf("score=%d\n",student[3].score);
}
else if(student[4].score<student[0].score && student[4].score<student[1].score && student[4].score<student[2].score && student[4].score<student[3].score)
{
printf("\nstudent who gets the minimum score is=\n");
printf("roolnumber=%d\n",student[4].rollnumber);
printf("name=%s\n",student[4].name);
printf("gender=%s\n",student[4].gender);
printf("score=%d\n",student[4].score);
}
break;
return 0;
}

}
