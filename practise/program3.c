//To find the highest digit in the supplied integer.

#include<stdio.h>

int main()
{
int large=0,rem=0;
int num;
printf("Enter the number=");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
if(rem>large)
{
large=rem;
}
num=num/10;
}
printf("The largest number =%d\n",large);
return 0;
}
