#include <stdio.h>

int main(){
	char font[] = {'a','e','i','o','u'};
	char verify;
	char bool = 1;
	printf("Mutgareq tar \n");
	scanf("%c", &verify);
	for(int i = 0; i < 5 ; i++)
	{
		if(font[i] == verify)
		{
			printf("The letter entered is a  consonant \n");
			bool = 0;
			break;
		}
		else
		{
			printf("The letter entered is a vowel \n");
			break;
		}
	}
	return 0 ;

}
