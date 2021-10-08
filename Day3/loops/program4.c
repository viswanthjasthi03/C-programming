//Write a program to find a given number is armstrong number or not.

#include<stdio.h>
#include<math.h>
void main()
{
int n,m,tmp,sum=0,a;
printf("Enter the number= ");
scanf("%d",&n);
tmp=n;
while(n>0)
{
m=n%10;
a=pow(m,3);
sum=sum+a;
n=n/10;
}
if(tmp==sum)
{
printf("The given number %d is a Armstrong number \n",tmp);
}
else
{
printf("The given number %d is not a Armstrong number \n",tmp);
}
}
