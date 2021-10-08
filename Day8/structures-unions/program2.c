/*Define structure with two members (one int and other char). Also define union with two members (one int and other char). Print the sizes of structure and union in number of bytes. 
Initialize union/structures members and print*/

#include<stdio.h>
#include<string.h>
struct student1
{
int i;
char ch;
}student1;
union student2
{
int j;
char ch1;
}student2;
int main()
{
	//printing the members of structures and unions
student1.i=111;
student1.ch='a';
printf("The number is=%d\n",student1.i);
printf("The character is=%c\n",student1.ch);
student2.j=222;
printf("The number is=%d\n",student2.j);
student2.ch1='b';
printf("The character is=%c\n",student2.ch1);
	//sizes of structers and unions
printf("The size of structure=%d bytes\n",sizeof(student1));
printf("The size of union=%d bytes\n",sizeof(student2));
	
}
