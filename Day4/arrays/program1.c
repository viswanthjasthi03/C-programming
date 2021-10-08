//Write a program to find the sum of all array elements.

#include<stdio.h>
void main()
{
int a[]={};
int i,sum=0,n;
printf("Enter the number of elements=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the values of a[%d]=",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("The addition of array=%d\n",sum);
}
