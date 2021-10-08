//Write a program to reverse an interger number.use recursion.

#include<stdio.h>
int reverse(int);
int main()
{
int n,Reverse;
printf("Enter the number=");
scanf("%d",&n);
reverse(n);
Reverse=reverse(n);
printf("%d \n",Reverse);
return 0;
}
int reverse(int n)
{
int rem=0;
while(n>0)
{
rem=rem*10+n%10;
n=n/10;
}
return rem;
}
