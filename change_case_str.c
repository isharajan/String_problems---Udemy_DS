#include<stdio.h>
void main()
{
	char mystr[] = "Tajmahal";
	int i =0;

	while(mystr[i] != '\0')
	{
		if(mystr[i]>=65 && mystr[i]<=96)
		{
			mystr[i] = mystr[i] + 32;
			i++;
		}
		else
		{
			mystr[i] = mystr[i] - 32;
			i++;
		}
	}
	printf("%s\n",mystr);

	
}