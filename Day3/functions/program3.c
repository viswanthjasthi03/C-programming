//Write a program to print prime Fibanacci numbers in a given range.

#include<stdio.h>
void fib(int,int);
int main()
{
int n1=0,n2=1;
fib(n1,n2);
}
void fib(int n1,int n2)
{
int n3,i,number=15,j;
printf("%d %d \n",n1,n2);
for(i=2;i<number;i++)
{
if(i<=n2)
{
break;
}
else
{
n3=n1+n2;
n1=n2;
n2=n3;
}
}
for(i=2;i<=n3;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
{
break;
}
}
if(i==j)
{
printf("%d \n",i);
}
}
}
