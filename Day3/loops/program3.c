//Write a c program to find sum of all odd numbers upto n using while loop.

#include<stdio.h>
void main()
{
int n,sum=0,i=1;
printf("Enter the value of n= ");
scanf("%d",&n);
while(i<=n)
{
if(i%2==1)
{
sum=sum+i;
}
i++;
}
printf("The sum of odd numbers=%d \n",sum);
}
