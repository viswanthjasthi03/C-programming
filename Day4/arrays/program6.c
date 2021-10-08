//Write a c program to sort elements in 1-D array

#include<stdio.h>
void main()
{
int a[5]={5,4,0,20,10};
int i,j,tmp;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
tmp=a[i];
a[i]=a[j];
a[j]=tmp;
}
}
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
}
