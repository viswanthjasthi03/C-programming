//Write a c program to count the number of vowels,constants,digits and remaining characters in given strings.

#include<stdio.h>
int main()
{
char a[]="cdac acts@123";
int vowels=0,constants=0,digits=0,spaces=0,special_characters=0;
for(int i=0;a[i]!='\0';i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o'  || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
{
 vowels++;
}
else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z')
{
 constants++;
}
else if( a[i]>='0' && a[i]<='9')
{
 digits++;
}
else if(a[i]==' ')
{
 spaces++;
}
else
{
 special_characters++;
}
}
printf("The number of vowels=%d\n",vowels);
printf("The number of constants=%d\n",constants);
printf("The number of digits=%d\n",digits);
printf("The number of spaces=%d\n",spaces);
printf("The number of special characters=%d\n",special_characters);
}
