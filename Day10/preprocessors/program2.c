/*Write a program to perform addition of two int or char or float numbers.
If we need to do the addition of two integers then it should compile the code related to the addition of integers.
If we need to do the addition of two float then it should compile the code related to the addition of float numbers.
Use conditional compilation*/

#include<stdio.h>
void main()
{
int a,b,result1;
float c,d,result2;
#ifdef addint
printf("Enter the value of a=");
scanf("%d",&a);
printf("Enter the value of b=");
scanf("%d",&b);
result1=a+b;
printf("Addition=%d\n",result1);
#elif addfloat
printf("Enter the value of c=");
scanf("%f",&c);
printf("Enter the value of d=");
scanf("%f",&d);
result2=c+d;
printf("Addition=%f\n",result2);
#else
printf("condition not defined\n");
#endif
}

