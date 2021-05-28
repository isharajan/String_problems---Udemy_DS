#include<stdio.h>
#include<string.h>

void find_duplicates(char name[])
{
	int hash[26];
	int i;
	for(i=0; i<26; i++)
	{
		hash[i] =0;
	}

	for(i=0; name[i]!='\0'; i++)
	{
		hash[name[i]-97] =  hash[name[i]-97] +1;
	}

	for(i=0; i<26; i++)
	{
		if(hash[i]>1)
		{
			printf("%c = %d\n",i+97,hash[i]);

		}
	}
}

void main()
{
	char name[] = "sibirrthfbbbdbcwgfuyg";
	printf("%s\n",name);
	find_duplicates(name);
}