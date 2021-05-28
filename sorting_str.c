#include<stdio.h>
#include<string.h>
void sort(char name[])
{
	int i,j;
	char temp;
	char min = name[0];
	for(i=0; i<strlen(name); i++)
	{
		for(j=i+1; j<strlen(name); j++)
		{
			if(name[i]>name[j])
			{
				temp    = name[i];
				name[i] = name[j];
				name[j] = temp;
			}
		}	
	}
	printf("%s",name);
}

void main()
{
	char name[] = "bcda";
	sort(name);
}