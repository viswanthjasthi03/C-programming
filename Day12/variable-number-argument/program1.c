//Write a program to find the average of given number of integers.Write an average function to accept variable number of arguments and perform average operation.

#include<stdio.h>
#include<stdarg.h>

float average(float num,...)
{
va_list valist;
float sum=0.0;
int i;
va_start(valist,num);
for(i=0;i<num;i++)
{
sum=sum+va_arg(valist,int);
}
va_end(valist);
return sum/num;
}
int main() 
{
printf("The average of 77 25 22 88=%.2f\n",average(4, 77,25,22,88)); 
printf("The average of 55 33 99 11 44=%.2f\n",average(5, 55,33,99,11,44)); 
}

