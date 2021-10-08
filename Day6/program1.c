//Write a C program that declares and initializes  a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables Use the format string "%u" [%p in hex] to print the addresses as unsigned integers.

#include<stdio.h>
void main()
{
int a=10;
char c='b';
float d=5.253;
int *ptr1;
char *ptr2;
float *ptr3;

ptr1=&a;
ptr2=&c;
ptr3=&d;

printf("The value of interger=%d  address of interger variable=%u address of pointer variable=%p \n",*ptr1,ptr1,&ptr1);
printf("The value of char=%c  address of char variable=%u address of pointer variable=%p\n",*ptr2,ptr2,&ptr2);
printf("The value of float=%f  address of float variable=%u address of pointer variable=%p\n",*ptr3,ptr3,&ptr3);
}
