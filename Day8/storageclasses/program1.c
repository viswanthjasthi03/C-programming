//Write c programs to demonstrate various storages classes
#include<stdio.h>
int fun1(int);
int fun2();
int fun3(int);
int main()
{
	//auto storage class.
auto int a=10;
printf("the value of a=%d\n",a);
fun1(a);
	//static storage class
fun2();
fun2();
	//extern storage class
extern int d;
printf("The value of d=%d\n",d); 
	//register storage class
register int e=50;
printf("The value of e before incrementation=%d\n",e);
fun3(e);
printf("The value of e before incrementation=%d\n",e);
fun3(e);
printf("The value of e before incrementation=%d\n",e);	
}
int fun1(int b)
{
b++;
printf("The value after incrementation=%d\n",b);
}
int fun2()
{
static int c=20;

printf("the value of c=%d\n",c);
c++;
printf("The value after incrementation=%d\n",c);
}
int d=40;
int fun3(int e)
{
e++;
printf("The value of e after incrementation=%d\n",e);
}
