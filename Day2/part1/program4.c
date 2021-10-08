//A c program contains the following declarations and initial assignments. Determine the value of each of the following expressions.




#include<stdio.h>
void main()
{
int i=8,j=5;
float x=0.005,y=0.01;
char c='c',d='d';
int f,g,h,k,l;
f=(3*i*j)%(2*d);
g=(i*j)%(c+2*d)/(x*y);
h=5*(i+j)>'c';
k=2*x+(y==0);
l=(x>y)&&(i>0)||(j<5);
printf("value of f=%d \n",f);
printf("value of g=%d \n",g);
printf("value of h=%d \n",h);
printf("value of k=%d \n",k);
printf("value of l=%d \n",l);
}
