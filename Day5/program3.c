//Write a program to convert lower case string to upper case string and vice versa.

#include<stdio.h>
#include<ctype.h>
void main()
{
int i=0;
char str1[]="cdac acts";
printf("After changing to upper case=\n");
while(str1[i])
{
putchar(toupper(str1[i]));
i++;
}
printf("\n");
//changing to lower case
char str2[]="CDAC ACTS";
int j=0;
printf("After changing to lower case=\n");
while(str2[j])
{
putchar(tolower(str2[j]));
j++;
}
printf("\n");
}
