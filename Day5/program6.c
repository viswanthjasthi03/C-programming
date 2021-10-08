//Write a c program to remove characters in a given string except alphabets.

#include<stdio.h>
#include<string.h>
int main()
{
char a[]="viswanth@123";
int i,j;
int len=strlen(a);
for(i=0;i<len;i++)
{
if( a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
{
a[j++]=a[i];
}
}
a[j]='\0';
printf("%s\n",a);
}
