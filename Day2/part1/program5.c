//Write a c program to find the area and the perimeter of the circle.Take radius "r" as input.


#include<stdio.h>
void main()
{
float r,area,perimeter;
printf("Enter the radius of the circle= \n");
scanf("%f",&r);
area=3.14*r*r;
perimeter=2*3.14*r;
printf("Area of the circle=%f \n", area);
printf("Perimeter of the circle=%f \n", perimeter);
}
