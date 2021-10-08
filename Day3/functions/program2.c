// Wrirte a program to find the GCD of two numbers. Take two integers as input, find the GCD and return it to main.

#include<stdio.h>
int Gcd(int, int);
int main()
{
int num1,num2,gcd;
printf("Enter the integers= \n");
scanf("%d %d",&num1,&num2);
Gcd(num1,num2);
gcd=Gcd(num1,num2);
printf("The GCD of two integers %d and %d are=%d \n",num1,num2,gcd);
}
int Gcd(int num1, int num2)
{
int i,gcd;
for(i=1;i<=num1 && i<=num2;i++)
{
if(num1%i==0 && num2%i==0)
{
gcd=i;
}
}
return(gcd);
}
