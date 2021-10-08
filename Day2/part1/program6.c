//Develop a c program to calculate simple interest using the formula I=PTR/100. Display interest with two digit precision after decimal point.


#include<stdio.h>
void main()
{
float I,P,T,R;
printf("Enter the principle amount= \n");
scanf("%f",&P);
printf("Enter the time period= \n");
scanf("%f",&T);
printf("Enter the rate of interest= \n");
scanf("%f",&R);
I=(P*T*R)/100;
printf("simple interest=%.2f \n", I);
}
