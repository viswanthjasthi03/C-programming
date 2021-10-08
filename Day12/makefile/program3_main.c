//Write a Make file for cleaning and buildingexecutables from multiple c source files, and header files 

#include<stdio.h>
#include "program3_fun.h"
int main()
{
int a,b;
printf("Enter the value of a=");
scanf("%d",&a);
printf("Enter the value of b=");
scanf("%d",&b);
math_fun(a,b);
}
