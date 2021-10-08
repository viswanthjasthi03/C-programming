//Write a c program to display one dimensional array elements with addresses.

#include<stdio.h>
void main()
{
int a[]={};
int n,i;
printf("Enter the number of elements=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the value of a[%d]=\n",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("The values of a[%d] =%d address=%p\n",i,a[i],&a[i]);
}
}
