//Write a program to find whether given number is palindrome or not.

#include<stdio.h>
void main()
{
int n,m,rev=0,tmp;
printf("Enter the number= ");
scanf("%d",&n);
tmp=n;
while(n>0)
{
m=n%10;
rev=(rev*10)+m;
n=n/10;
}
if(tmp==rev)
{
printf("The given number %d is a palindrome \n",tmp);
}
else
{
printf("The given number %d is not a palindrome \n",tmp);
}
}
