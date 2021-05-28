#include<stdio.h>
#include<string.h>
void reverse1(int i,char name[])
{
	if(name[i] == '\0' )
	{
		return;
	}
	reverse1(i+1,name);
	printf("%c",name[i]);
}

char* reverse2(char *name)
{
	int i,j;
	char temp;
	i = 0;
	j = strlen(name)-1;


	while(i<=strlen(name)/2 )
	{
		
			temp = name[i];
			name[i] = name[j];
			name[j] = temp;
			i++;
			j--;

		
		//printf("%c",name[i]);
	}
	return name;
}

void main()
{
	char name[] = "hello";
	printf("String = %s\n",name);
	int i = 0;
	
	reverse1(0,name);
	
	char *n = reverse2(name);
	printf("Revesed string : %s\n",n);

}