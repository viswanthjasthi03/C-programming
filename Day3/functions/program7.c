//Write a program to swap contents of two variables using functions

#include<stdio.h>
int swap1(int,int);
int swap2(int,int);
int main()
{
int a,b,swapping1,swapping2;
printf("Enter the numbers=");
scanf("%d %d",&a,&b);
swap1(a,b);
swap2(a,b);
swapping1=swap1(a,b);
swapping2=swap2(a,b);
printf("The output of a and b=%d and %d\n",swapping1,swapping2);
}
int swap1(int a,int b)
{
a=b;
return a;
}
int swap2(int a,int b)
{
b=a;
return b;
}
