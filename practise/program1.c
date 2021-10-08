//Write the program to print the multiplication table of a given number(upto 10) using a loop.

#include<stdio.h>
void main()
{
int n,i;
printf("Enter the number= \n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d \n",n,i,n*i);
}
}
