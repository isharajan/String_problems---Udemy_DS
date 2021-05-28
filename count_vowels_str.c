#include<stdio.h>
void main()
{
	int count_vowels =0;
	int i;
	char mystr[] = "Aeiou";
	for(i=0; mystr[i]!='\0'; i++)
	{
		if(mystr[i] == 'A'||mystr[i] == 'a'||mystr[i] == 'E'||mystr[i] == 'e'||mystr[i] == 'I'||
			mystr[i] == 'i'||mystr[i] == 'O'||mystr[i] == 'o'||mystr[i] == 'U'||mystr[i] == 'u')
		{
			count_vowels = count_vowels+1;
		}			

	}
	printf("string : %s\n",mystr);
	printf("No.of.Vowels = %d\n",count_vowels);
}
