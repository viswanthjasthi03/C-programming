//Write a C program to declare an integer and an integer pointer to it.Initialize the integer variable. Print the value of the int variable using pointer variable

#include<stdio.h>
void main()
{
int *ptr;
int a;
ptr=&a;
*ptr=200;
printf("The value of a =%d\n",a);

}
