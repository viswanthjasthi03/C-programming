//Write a C program to demonstrate double pointer.

#include<stdio.h>
void main()
{
int i=20;
int *ptr1;
int **ptr2;
ptr1=&i;
ptr2=&ptr1;

printf("The value of i=%d\n",i);
printf("The value of *ptr1=%d\n",*ptr1);
printf("The value of **ptr2=%d\n",**ptr2);
printf("The address of i=%p\n",&i);
printf("The address of ptr1=%p\n",&ptr1);
printf("The address of ptr2=%p\n",&ptr2);
printf("The value after changing the value of ptr1\n");
*ptr1=30;
printf("The value of i=%d\n",i);
printf("The value of *ptr1=%d\n",*ptr1);
printf("The value of **ptr2=%d\n",**ptr2);
printf("The address of i=%p\n",&i);
printf("The address of ptr1=%p\n",&ptr1);
printf("The address of ptr2=%p\n",&ptr2);
printf("The value after changing the value of ptr2\n");
**ptr2=40;
printf("The value of i=%d\n",i);
printf("The value of *ptr1=%d\n",*ptr1);
printf("The value of **ptr2=%d\n",**ptr2);
printf("The address of i=%p\n",&i);
printf("The address of ptr1=%p\n",&ptr1);
printf("The address of ptr2=%p\n",&ptr2);
}
