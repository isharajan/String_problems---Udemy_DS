#include<stdio.h>
void main()
{
	char name[50] = "hello";
	int i=0;
	while(name[i] != '\0' && name[i]>=65 &&  name[i]<=122)
	{
		i++;
	}
	if(name[i] == '\0')
	{
		printf("valid string\n");
	}
	else
	{
		printf("Not valid string\n" );
	}
}