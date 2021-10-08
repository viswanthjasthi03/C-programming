//Write a swap function and use call by reference.

#include<stdio.h>
void swapping(int *,int *);
void main()
{
int a=10,b=20;
int *ptr1,*ptr2;
ptr1=&a;
ptr2=&b;
printf("The value of ptr1 before swapping=%d\n",*ptr1);
printf("The value of ptr2 before swapping=%d\n",*ptr2);
swapping(&a,&b);
}
void swapping(int *ptr1,int *ptr2)
{
int tmp;
tmp=*ptr1;
*ptr1=*ptr2;
*ptr2=tmp;
printf("The value of ptr1 After swapping=%d\n",*ptr1);
printf("The value of ptr2 After swapping=%d\n",*ptr2);
}
