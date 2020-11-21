#include <stdio.h>

int main ()
{
	int x,y;
	int array1[5] = {3,6,9,8,7};
	int array2[4] = {1,5,11,13};
	int array3[9];
	
	for (x=0;x < 5; x++)
	{
		array3[x] = array1[x];
	}
	
	for (x=5,y=0;x < 10,y<4;x++,y++)
	{
		array3[x] = array2[y];
	}
	
	for(x=0;x < 9; x++)
	{
		printf("%d \t", array3[x]);
	}
	
	printf("\nCakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
	return 0;
}
