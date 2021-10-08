//Write a c program to display  three-dimensional array elements with addresses.

#include<stdio.h>
void main()
{
int a[2][2][2]={4,8,9,7,2,5,3,8};
int i,j,k;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
printf("The values are a[%d][%d][%d]=%d address=%p\n",i,j,k,a[i][j][k],&a[i][j][k]);
}
}
}
}
