#include<stdio.h>
#include<string.h>
char * sort(char name[])
{
	int i,j;
	char temp;

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
	//printf("%s",name);
	return (name);
}

int is_anagaram(char name1[],char name2[])
{
	int i=0;

	if(strlen(name1) == strlen(name2))
	{
		for(i=0; i<strlen(name1); i++)
		{
			if(name1[i] != name2[i])
			{
				break;
			}
		}
	
		if(name1[i] == '\0')
		{
			
			return 1;
		}
		else
		{
			
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

void main()
{
	char name1[] = "dog";
	char name2[] = "god";
	char *sort_str1  = sort(name1);
	char *sort_str2  = sort(name2);

	//printf("str1 =%s\n",sort_str1);
	//printf("str2 =%s\n",sort_str2);

	printf("%s\n",name1);
	printf("%s\n",name2);
	int is_anag =is_anagaram(sort_str1,sort_str2);

	if(is_anag == 1)
	{
		printf("anagaram\n");
	}
	else
	{
		printf("Not anagram\n");
	}

}