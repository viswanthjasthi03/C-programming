//Write a c program to print the inverse of a given matrix.

#include<stdio.h>
void main()
{
int a[2][2]={3,2,7,5};
int determinant=0,tmp,i,j;
printf("Before inverse=");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",a[i][j]);
}
}
printf("\n");
determinant=a[0][0]*a[1][1]-a[1][0]*a[0][1];
tmp=a[0][0];
a[0][0]=a[1][1];
a[1][1]=tmp;
a[0][1]=-a[0][1];
a[1][0]=-a[1][0];
if(determinant==0)
{
printf("The inverse is not possible\n");
}
else
{
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
a[i][j]=a[i][j]/determinant;
}
}
printf("After inverse=");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",a[i][j]);
}
}
}
}
