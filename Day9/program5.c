/*Write a program to read English text to end-of-data and print a count of word lengths, i.e. the total number of words of length 1 which occurred, the number of length 2, and so on. 

Define a word to be a sequence of alphabetic characters. You should allow for word lengths up to 25 letters. Typical output should be like this: 
length 1 : 10 occurrences 
length 2 : 19 occurrences 
length 3 : 127 occurrences 
length 4 : 0 occurrences 
length 5 : 18 occurrences */

#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp;
char path[100];
char ch;
int characters=0, words=0, lines=0;
fp = fopen("file5.txt", "r");
if (fp == NULL)
{
printf("\nerror in opening file\n");

exit(0);
}

int cnt[20]={0};
int len = 0,j=0,i;
while ((ch = fgetc(fp)) != EOF)
{

if(ch==' ' || ch=='\0')
{
			//check NULL
if(ch=='\0')
{
if(len>0)
{
cnt[j++]=len;
len=0;
}
break; //terminate the loop
}
cnt[j++]=len;
len=0;
}
else
{
len++;
}		
}	
printf("Words length:\n");
for(i=0;i<j;i++)
{
printf("length[%d]:%doccurance\n ",i,cnt[i]);
}
printf("\b\b \n"); //to remove last comma
	
return 0;
}		

