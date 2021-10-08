//Write a program to read the name and marks of a student and store it in a file.If the file already exists, add information to it.

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
int marks;
char name[20];
fp= fopen("file1.txt","w+");
printf("Enter the name=");
scanf("%s",name);
printf("Enter the marks=");
scanf("%d",&marks);
if(fp==NULL)
{
printf("error in opening file\n");
}
else
{
fprintf(fp,"Name:%s \n Marks:%d",name,marks);
printf("Name:%s \n Marks:%d\n",name,marks);

}
fclose(fp);
}

