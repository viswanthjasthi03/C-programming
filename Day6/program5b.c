//Copy the elements of the first array to second array using pointers.

#include<stdio.h>
void main()
{
int a[5];
int i;
int b[5]={2,6,7,9,0};
for( i=0;i<5;i++)
{
a[i]=*(b+i);
}
printf("copying one array to anaother array through pointer=");
printf("\n");
for(i=0;i<5;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
}
