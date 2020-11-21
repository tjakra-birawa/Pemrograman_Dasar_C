#include <stdio.h>

int main ()
{
	int nilai;
	
	printf("pernyataan break batas 10\n");
	for (nilai =1;nilai <= 10; nilai++)
	{
		if (nilai == 5) break;
		else printf("%d\n",nilai);
	}
	
	printf("pernyataan continue batas 10\n");
	for (nilai =1;nilai <= 10; nilai++)
	{
		if (nilai == 5) continue;
		else printf("%d\n",nilai);
	}
	
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0;
}
