//Write a program to calculate the sum of the digits of a given number.

#include<stdio.h>
void main()
{
int m,n,sum=0;
printf("Enter the number= \n");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("Sum of the digits of the given number=%d \n",sum);
}
