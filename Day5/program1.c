//Write a c program to perform the following operations on two strings using intrinsic functions.

#include<stdio.h>
#include<string.h>
int main()
{
char a[]="VISWANTH ";
char b[]="SAI SRINADH";
  
  //concatenate two strings
printf("The value of concatenate=%s\n",strcat(a,b));
	//find the length of each string
printf("The value of a=%s\n",a);
printf("The value of b=%s\n",b);
int c,d;
c=strlen(a);
d=strlen(b);
printf("The length of string a=%d\n",c);
printf("The length of string b=%d\n",d);
 //compare two strings
 char e[]="cdac";
 char f[]="ac";
 if(strcmp(e,f)==0)
 {
 printf("The strings are equal\n");
 }
 else
 {
 printf("The strings are not equal\n");
 }
 	//copy strings
printf("The value of A Before copying=%s\n",a);
printf("The value of A after copying=%s\n",strcpy(a,e));
	//Find wheather string1 is the subset of the second string or not
if(strstr(e,f)>0)
 {
 printf("The strings is subset\n");
 }
 else
 {
 printf("The strings is not subset\n");
 }	
 //Reverse the string
 printf("Before reverse the string=%s\n",e);
 int len=0,end,k;
 char r[]="";
 len=strlen(e);
 end=len-1;
 printf("After reversing=");
 for( k=0;k<len;k++)
 {
r[k]=e[end];
 end--;
 }
 r[k]='\0';
 printf("%s\n",r);
 return 0;
 }	


