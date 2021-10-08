//Write a c program to check whether the input is digit or alphabet. Print the ASCII umber if it is a digit.

#include<stdio.h>
void main()
{
char a;
printf("Enter the character= \n");
scanf("%c",&a);
if(a>='a' && a<='z' || a>='A' && a<='Z') 
{
printf("It is a alphabet \n");
}
else
{
printf("It is a digit \n");
printf("The ascii value of the %c: %d \n", a,a);
}
}
