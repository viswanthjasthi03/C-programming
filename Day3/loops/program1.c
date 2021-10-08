//Write a c program which adds all numbers from 1 to n, except those which are divisible by 5. Implement this using using for loop and continue statement.

#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter the value of n= ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%5==0)
{
continue;
}
sum=sum+i;
}
printf("The value is=%d \n",sum);
}
