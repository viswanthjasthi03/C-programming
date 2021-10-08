//Write a c program to print the transpose of a given matrix.

#include<stdio.h>
void main()
{
int a[2][2]={5,8,3,9};
int i,j;
printf("Before transpose=");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",a[i][j]);
}
}
printf("\n");
for(j=0;j<2;j++)
{
for(i=0;i<2;i++)
{
printf("%d ",a[i][j]);
}
}
}
