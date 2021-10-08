/*Write a program to count the vowels and letters from text file. Read text a character at a time until you encounter end-of-data. Then print out the number of occurrences of each of the vowels a, e, i, o and u in the text, the total number of letters, and each of the vowels as an integer percentage of the letter total. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char c,b;
int a1=0,e1=0,i1=0,o1=0,u1=0,count=0,total_text,rest;
fp = fopen("file4.txt","r");
if(fp == NULL)
{
printf("Cannot find the file:");
}
while ((c = fgetc(fp))!=EOF)
{
if(c == 'a' || c == 'A')
{
a1=a1+1;
}
else if(c == 'e' || c =='E')
{
e1 = e1+1;
}
else if(c == 'i' || c == 'I')
{
i1=i1+1;
}
else if(c == 'o' || c == 'O')
{
o1 = o1+1;
}
else if(c == 'u' || c =='U')
{
u1=u1+1;
}
else
{
count = count+1;
}
}
total_text = a1+e1+i1+o1+u1+count;
printf(" a = %d \t e = %d \t i = %d \t o = %d \t u = %d \t total_text = %d",a1,e1,i1,o1,u1,total_text);
a1 = (a1*100)/total_text;
printf("\na = %d%%",a1);
e1 = (e1*100)/total_text;
printf("\ne = %d%%",e1);
i1 = (i1*100)/total_text;
printf("\ni = %d%%",i1);
o1 = (o1*100)/total_text;
printf("\no = %d%%",o1);
u1= (u1*100)/total_text;
printf("\n u= %d%%\n",u1);
rest=100-(a1+e1+i1+o1+u1);
printf("\n rest= %d%%\n",rest);
fclose(fp);
}
