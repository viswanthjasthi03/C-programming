//Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers.

#include<stdio.h>
char length(char*);
void concat(char*,char*);
void copy1(char*,char*); //Declaration of the length,concating,copying,comaparision//
char compare(char*,char*);
int main()
{
char str[50],str2[50];
char str3[50];
char comp;
printf("Enter  a string which we want to know length: ");
scanf("%s %s",str,str2);                                           //Input from the user//
int len = length(str);
int len1 = length(str2);
printf("length of the %s is %d\n",str,len);
printf("length of the %s is %d\n",str2,len1);
concat(str,str2);//Concating from one string to another//
printf("After Concatination  %s\n ",str); 
copy1(str3,str);//Copying from one string to another string//
printf("Copying from one string to another is:%s\n",str3);
comp = compare(str,str2);//Comparision between two strings//
if(comp == 0)
{
printf("Strings are equal");
}
else
{
printf("Strings are not equal");
}
}
//Defination of finding the length for string//
char length(char *str1)
{
int i=0;
while(*str1!='\0')
{
i++;
str1++;
}
return i;
}
//Defination of concat of two  string//
void concat(char *str,char *str2)
{
while(*str!='\0')
str++;
while(*str2!='\0')
{
*str=*str2;
str++;
str2++;
}
*str = '\0';
}
//Defination of copying from one string to another ones//
void copy1(char *str3,char *str)
{
while(*str!='\0')
{
*str3 = *str;
str3++;
str++;
}
*str3 ='\0';
}
//Defination of Comparing the strings//
char compare(char *str,char *str2)
{
int flag = 0;
while(*str!='\0' && *str2!='\0')
{
if(*str != *str2)
{
flag =1;
}
str++;
str2++;
}
if(flag ==0)
{
return 0 ;
}
else
{
return 1;
}
}




