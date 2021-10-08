//Write a program to remove the duplicate elements in an integer array

#include<stdio.h>
int main()
{
int i,n,j,k;
printf("Enter the value of n:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the values of array a[%d]:",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;k++)
{
a[k]=a[k+1];
}
n--;
j--;
}
}
}
printf("After deleting the duplicate array:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
}
