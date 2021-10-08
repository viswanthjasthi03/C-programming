//Write a c program to find factorial of a number n using for loop.

#include<stdio.h>
void main()
{
int i,n,factorial=1;
printf("Enter the value of n= ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
factorial=factorial*i;
}
printf("The factorial of %d=%d \n",n,factorial);
}

