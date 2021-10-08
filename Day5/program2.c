//Write a c program to perform the following operations on two strings using intrinsic functions.

#include<stdio.h>
void main()
{
 char a[]="acts";
 char b[]="acts";
 int i,j;
 //concatenate two strings
for( i=0;a[i]!='\0';i++);

for( j=0;b[j]!='\0';j++,i++)
{
a[i]=b[j];
}
  a[i]='\0';
  printf("%s\n",a);

  //find the length of each string
  int len1=sizeof(a)/sizeof(a[0]);
  int len2=sizeof(b)/sizeof(b[0]);
  printf("The length of a=%d\n",len1);
  printf("The length of b=%d\n",len2);
  
  //compare two strings
  char c[]="acts";
 char d[]="cdac";
 int len3=sizeof(c)/sizeof(c[0]);
  int len4=sizeof(d)/sizeof(d[0]);
  for(i=0;i<=len3;i++)
  {
  printf("The value c=%s",c);
  printf("The value d=%s",d);
  if(c==d)
{
printf("The strings are same\n");
  }
  else
  {
 printf("The two strings are not same\n"); 
 break;
  }
}
//copy strings
char e[]="acts";
 char f[]="cdac";
 printf("The value e Before copying=%s\n",e);
  printf("The value f Before copying=%s\n",f);
for( i=0;e[i]!='\0';i++)
{
e[i]=f[i];
}
  e[i]='\0';
  printf("The value e After copying=%s\n",e);
  
}






