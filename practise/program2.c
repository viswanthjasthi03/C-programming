//Write a c program to count the number of digits

#include<stdio.h>
void main()
{
int n,count=0;
printf("Enter the number= \n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("count=%d \n",count);
}
