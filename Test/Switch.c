//For simple vowel/consonant actions


#include<stdio.h>

int main()
{
	char ch;

	printf("Enter a character: ");
	scanf("%c",&ch);
    if((ch>='A'&&ch<='z')||(ch>='a'&&ch<='z'))
	{
			switch(ch)
			{
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				printf("%c is a VOWEL.\n",ch );
				break;
					default:
				printf("%c is a CONSTANT.\n",ch );
			}
	}
	else
	{
		printf("%c is NOT an alphabet.\n",ch);
	}

	return 0;
}
