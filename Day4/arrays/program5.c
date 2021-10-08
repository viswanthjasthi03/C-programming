//Write a c program to reversing the 1-D Array.

#include<stdio.h>
void main()
{
int a[5]={5,8,6,7,9};
int i;
printf("Before reversing=");
for(i=0;i<5;i++)
{
printf("%d ",a[i]);
}
printf("\n");
printf("after reversing=");
for(i=4;i>=0;i--)
{
printf("%d ",a[i]);
}
}
