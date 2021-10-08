//Write a recursive function to find factorial of a number.

#include<stdio.h>
int fact(int);
int main()
{
int n,factorial;
printf("Enter the number= \n");
scanf("%d",&n);
fact(n);
factorial=fact(n);
printf("%d",factorial);
return 0;
}
int fact(int n)
{
if(n == 1)
{
return 1;
}
else
{
return n*fact(n-1);
}
}
