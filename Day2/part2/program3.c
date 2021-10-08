//Write a program to create a simple calculator to perform addition,subtraction,multiplication and division using switch statement.Take the required operation as input from the user.

#include<stdio.h>
void main()
{
int a=10,b=5,c;
char operand;
printf("Enter the operand \n");
scanf("%c",&operand);
switch(operand)
{
case '+':
c=a+b;
printf("Addition=%d \n",c);
break;
case '-':
c=a-b;
printf("Subtraction=%d \n",c);
break;
case '*':
c=a*b;
printf("Multiplication=%d \n",c);
break;
case '/':
c=a/b;
printf("Divison=%d \n",c);
break;
default:
printf("operand error \n");
break;
}
}
