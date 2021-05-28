#include<stdio.h>
void main()
{
	char mystr[] = "how are you hhdgcsg gjc";
	int word_count = 0;
	int i = 0;
	while(mystr[i] != '\0')
	{
		if(mystr[i] == ' ')
		{
			word_count = word_count+1;
		}

		i++;
	}
	word_count =word_count +1;
	printf("string : %s\n",mystr);
	printf("No.of. words = %d\n",word_count);
}