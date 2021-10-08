//Write a C program to read through an array of any type using pointers

#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
int *ptr=a;
for(int i=0;i<5;i++)
{
printf("Integer to element a[%d]=%d\n",i,*ptr);
ptr++;
}
}
