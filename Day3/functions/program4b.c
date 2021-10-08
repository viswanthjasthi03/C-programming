//Take a range of numbers as input and print all the prime fibonacci numbers as output using recursive function.

#include<stdio.h>
int fib(int);
int main()
{
int i;
fib(i);
for(i=0;i<5;i++)
{
printf("%d \n",fib(i));
}
return 0;
}
int fib(int i)
{
if(i == 0)
{
return 0;
}
if(i == 1)
{
return 1;
}
else
{
return (fib(i-1)+fib(i-2));
}
}
