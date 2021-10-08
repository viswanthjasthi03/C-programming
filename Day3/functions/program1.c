//Write a swap function to perform the swap operation.

#include<stdio.h>
void swap(int ,int);
void main()
{
int a,b;
printf("Enter the values of a and b= \n");
scanf("%d %d",&a,&b);
swap(a,b);
}
void swap(int a,int b)
{
printf("The values before swapping a=%d and b=%d \n",a,b);
int tmp;
tmp=a;
a=b;
b=tmp;
printf("The output after swapping a=%d and b=%d \n",a,b);
}
