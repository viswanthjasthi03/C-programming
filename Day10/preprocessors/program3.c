//Develop programs to demonstrate the functionality of preprocessor operator ## and also conditional compilation. 

#include<stdio.h>
#define CONCAT(a,b)  a##b 
void main()
{
	//demonstrating the preprocessor operator.
printf("After concating=%d\n",CONCAT(20,21));
	//demonstrating the conditional compilition.
#ifdef x
printf("cdac hyd\n");
#elif y
printf("cdac blr\n");
#else
printf("condition not defined\n");
#endif
}
