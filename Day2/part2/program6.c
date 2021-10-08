//Write a program to find the sum of numbers in a given range.

#include<stdio.h>
void main()
{
int i,a,b,sum=0;
printf("Enter the start number= \n");
scanf("%d",&a);
printf("Enter the end number= \n");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
sum=sum+i;
}
printf("Sum of the digits=%d \n",sum);
}
