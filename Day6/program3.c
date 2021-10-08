//Write a program to perform the swap operation

#include<stdio.h>
void main()
{
int *ptr1,*ptr2;
int a=20,b=30,tmp;
ptr1=&a;
ptr2=&b;
printf("The value of ptr1 before swapping=%d\n",*ptr1);
printf("The value of ptr2 before swapping=%d\n",*ptr2);
tmp=*ptr1;
*ptr1=*ptr2;
*ptr2=tmp;
printf("The value of ptr1 After swapping=%d\n",*ptr1);
printf("The value of ptr2 After swapping=%d\n",*ptr2);
}
