//Write a c program to copy the elements of one 2-D array t,,o another 2-D array.

#include<stdio.h>
void main()
{
int a[3][3]={5,8,9,7,6,2,8,1,9};
int b[3][3]={};
printf("Before copying the elements a[3][3]=");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
}
printf("\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
b[i][j]=a[i][j];
}
}
printf("After copying the elements b[3][3]=");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%d ",b[i][j]);
}
}
}
