//Write a c program to find Greatest element in array in one dimensional array.

#include<stdio.h>
void main()
{
int a[5]={5,8,10,2,9};

if(a[0]>a[1] && a[0]>a[2]  && a[0]>a[3] && a[0]>a[4])
{
printf("The largest number is a[0]=%d\n",a[0]);
}
if(a[1]>a[0] && a[1]>a[2]  && a[1]>a[3] && a[1]>a[4])
{
printf("The largest number is a[1]=%d\n",a[1]);
}
if(a[2]>a[0] && a[2]>a[1]  && a[2]>a[3] && a[2]>a[4])
{
printf("The largest number is a[2]=%d\n",a[2]);
}
if(a[3]>a[0] && a[3]>a[1]  && a[3]>a[2] && a[3]>a[4])
{
printf("The largest number is a[3]=%d\n",a[3]);
}
if(a[4]>a[0] && a[4]>a[1]  && a[4]>a[2] && a[4]>a[3])
{
printf("The largest number is a[3]=%d\n",a[3]);
}
}
