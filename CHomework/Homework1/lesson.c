#include <stdio.h>

int main(){
	int oneNumber = 0;
	int twoNumber = 0;
	printf("Mutgareq Tiv \n");
	scanf("%d", &oneNumber);
	scanf("%d", &twoNumber);
	if(oneNumber > twoNumber)
	{
		printf("Nshvac %d  tivy mets e erkord tvic \n", oneNumber);
	}
	else
	{
		printf(" Nshvac %d  tivy mets e arajin tvic \n", twoNumber);
	}
	return 0 ;
}
