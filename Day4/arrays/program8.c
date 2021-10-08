//Write a c program to display two-dimensional array elements with addresses

#include<stdio.h>
void main()
{
int a[3][3]={2,5,8,5,7,6,2,7,9};
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Tha values of the array a[%d][%d]=%d address=%p\n",i,j,a[i][j],&a[i][j]);
}
}
}
