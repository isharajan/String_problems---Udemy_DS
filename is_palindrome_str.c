#include<stdio.h>
#include<string.h>

int is_palindrome(char name[])
{
	int i,j;
	i = 0;
	j = strlen(name)-1;

	while(i<=strlen(name)/2)
	{
		
		if(name[i] == name[j])
			{
				i++;
				j--;
			}
		else
		{
			break;
		}
	}

	if(i>=j)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}


void main()
{
	char name[]="haho";
	int res = is_palindrome(name);
	printf("%s\n",name);
	printf("%d\n",res);
	
	if(res == 0)
	{
		printf("Not palindrome\n");
	}
	else
	{
		printf("palindrome\n");
	}

}