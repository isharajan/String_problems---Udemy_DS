#include<stdio.h>

int find_length(char mystr[])
{
	int i=0;
	int count =0;
	while(mystr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
void main()
{	int str_len;
	char mystr[] = "isha";
	str_len = find_length(mystr); 
	printf("STRING : %s\n",mystr);
	printf("string length = %d\n",str_len);
}