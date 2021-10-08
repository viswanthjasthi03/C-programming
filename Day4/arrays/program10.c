//Write a program to sum two 2-D matrices

#include<stdio.h>
void main()
{
int a[3][3]={5,2,7,6,8,5,7,8,9};
int b[3][3]={5,7,3,9,1,7,6,8,3};
int c[3][3]={};
int i,j;
printf("The array of a=");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
}
printf("\n");
printf("The array of b=");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",b[i][j]);
}
}
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("\n");
printf("After addition=");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d ",c[i][j]);
}
}
}
