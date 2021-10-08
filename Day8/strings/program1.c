//Write a program to convert lower case string to upper case string and vice versa using pointers. Write a separate function to do the conversion. Do not use intrinsic functions.

#include<stdio.h>
#include<string.h>
int upper(char *);
int lower(char *);
int main()
{
char a[]="viswanth";
char b[]="VISWANTH";
upper(a);
lower(b);
}
int upper(char *ptr)
{
int i;
for(i=0;ptr[i]!='\0';i++)
{
if( ptr[i]>='a' && ptr[i]<='z')
{
ptr[i]-=32;
}
}
printf("After converting to uppercase=%s\n",ptr);
}

int lower(char *ptr1)
{
int i;
for(i=0;ptr1[i]!='\0';i++)
{
if( ptr1[i]>='A' && ptr1[i]<='Z')
{
ptr1[i]+=32;
}
}
printf("After converting to lowercase=%s\n",ptr1);
}
