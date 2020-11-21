#include <stdio.h>

void Prima(int);
void P1_100();

int main ()
{
	int n;
	printf("Silahkan Masukkan Angka : ");
		scanf("%d", &n);
		Prima(n);
		P1_100();
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
}

void Prima(int n)
{
	int x = 0;
	int hasil;
	for (int pembagi = 2; pembagi <= n; pembagi++)
	{
		hasil = n%pembagi;
		if (hasil == 0)
		{
			x++;
		}
		}
		if (x == 1)
		{
			printf("Angka %d Merupakan Angka Prima!", n);
		}
		else
		{
			printf("Angka %d Bukan Angka Prima!", n);	
		}
}

void P1_100()
{
	int n, bagi, bilangan;
		printf("\n\nAngka Prima dari 1 - 100 adalah \n\n");
	 for (int x=2; x<100; x++)
 	{
		for (int y=2; y<=x; y++)   
		{
		    if (x == y)  
		    {
		    printf("%d\n",x);
		    
			}
		    else if (x%y == 0)
			{
				break;	
					}		
		    
  		}
 	}
}
