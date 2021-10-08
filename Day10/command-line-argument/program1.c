//Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
printf("The name of program=%s\n",argv[0]);
printf("The number of variables=%d\n",argc);
int greatest=0,smallest=0,i;
greatest=atoi(argv[1]);
for(i=2;i<argc;i++)
{
if(greatest< atoi(argv[i]))
{
greatest= atoi(argv[i]);
}
}
smallest=atoi(argv[1]);
for(i=2;i<argc;i++)
{
if(smallest> atoi(argv[i]))
{
smallest= atoi(argv[i]);
}
}
printf("The greatest value is=%d\n",greatest);
printf("The smallest value is=%d\n",smallest);
}
