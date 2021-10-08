//Define a structure “complex” (use typedef) to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.

#include<stdio.h>
typedef struct complex
{
int real,img;
}a,b;
int main()
{
a a;
b b;
a.real=20;
b.real=10;
a.img=20;
b.img=10;
int c,d,e,f;
c=a.real+b.real;
d=a.img+b.img;
e=a.real-b.real;
f=a.img-b.img;
printf("addition of complex numbers=%d+%di\n",c,d);
printf("subtraction of complex numbers=%d+%di\n",e,f);
}
