//Write a program to find the volume of a sphere using macros.Pass the radius as the argument to the macro.

#include<stdio.h>
#define VOLUME(r) (4.0/3.0)*3.14*r*r*r
void main()
{
int a=3;
float volume;
volume=VOLUME(a);
printf("The volume of sphere=%f\n",volume);
}
