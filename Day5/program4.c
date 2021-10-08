//Write a program to print out all rotations of a string typed in.

#include<stdio.h>
#include<string.h>
int main()
{
char a[]="acts";
int i,j;
int len=strlen(a);
for(i=0;i<len;i++)
{
a[len]=a[0];
for(j=0;j<len;j++)
{
a[j]=a[j+1];
}
a[len]='\0';
printf("\n%s",a);
}
return 0;
}
