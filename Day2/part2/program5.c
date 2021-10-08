//Write a program to check whether the given number is perfect number or not.

#include<stdio.h>
void main()
{
int rem,num,i,sum=0;
printf("Enter the number= \n");
scanf("%d",&num);
for(i=1;i<num;i++)
{
rem=num%i;
if(rem==0)
{
sum=sum+i;
}
}
if(sum==num)
{
printf("It is a perfect number \n");
}
else
{
printf("It is not a perfect number \n");
}
}
