/*A C program contains the following declaration 
What is the value of x? 
What is the value of (x+2)?
What is the value of *x? 
What is the value of (*x+2)? 
What is the value of *(x+2)?*/

#include<stdio.h>
void main()
{
int x[8]={10,20,30,40,50,60,70,80};
printf("The value of x in address=%u\n",x);
printf("The value of x+2 in address=%u\n",x+2);
printf("The value of x=%d\n",*x);
printf("The value of x+2=%d\n",(*x+2));
printf("The value of x+2=%d\n",*(x+2));
}
