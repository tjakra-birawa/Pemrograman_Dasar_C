#include <stdio.h>

int a_cols,b_cols,dest_cols,source_cols, x,y, lop, pilihan, ulang;

void addition();
void subtraction();
void multiplication();
int	isDiagonalMatrix();
int	isIdentityMatrix();

void addition(int dest[dest_cols][dest_cols], int a[a_cols][a_cols], int b[b_cols][b_cols])
{
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			dest[x][y]=a[x][y]+b[x][y];
		}
	}
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			printf("%3d ",dest[x][y]);
		}
		printf("\n");
	}
	printf("(0) Kembali ");
	scanf("%d", &ulang);
};

void subtraction(int dest[][dest_cols],	int	a[][a_cols], int b[][b_cols])
{
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			dest[x][y]=a[x][y]-b[x][y];
		}
	}
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			printf("%3d ",dest[x][y]);
		}
		printf("\n");
	}
	printf("(0)Kembali ");
	scanf("%d", &ulang);
};

void multiplication(int	dest[][dest_cols], int a[][a_cols], int b[][b_cols])
{
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			dest[x][y]=0;
			for(lop=0;lop<a_cols;lop++)
			{
				dest[x][y]=dest[x][y]+(a[x][lop]*b[lop][y]);
			}
		}
	}
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			printf("%3d ",dest[x][y])	;
		}
		printf("\n");
	}
	printf("(0)Kembali ");
	scanf("%d", &ulang);
};
int	isDiagonalMatrix(int source[][source_cols])
{
	int info[source_cols][source_cols];
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			if(x==y)
			{
				info[x][y]=1;
			}
			else
			{
				info[x][y]=0;
			}
		}
	}
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			if(x!=y)
			{
				if(source[x][y]!=info[x][y])
				{
					return 0;
					break;
				}
			}
			else
			{
				return 1;
			}
		}
	}
};

int	isIdentityMatrix(int source[][source_cols])
{
	int info[source_cols][source_cols];
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			if(x==y)
			{
				info[x][y]=1;
			}
			else
			{
				info[x][y]=0;
			}
		}
	}
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			if(info[x][y]!=source[x][y])
			{
				return 0;
				break;
			}
			else
			{
				return 1;
			}
		}
	}
};

int main()
{
	printf("Silahkan Masukkan Panjang Matriks A & B  = ");
	scanf("%d", &a_cols);
	b_cols=a_cols;
	dest_cols=a_cols;
	source_cols=a_cols;
	int a [a_cols][a_cols];
	int b[b_cols][b_cols];
	int dest[dest_cols][dest_cols];
	int	source[source_cols][source_cols];


	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			printf("Matrik A [%d][%d] = ",x+1,y+1);
			scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			printf("Matrik B [%d][%d] = ",x+1,y+1);
			scanf("%d",&b[x][y]);
		}
	}
	printf("MATRIK A\n");
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			printf("%d ",a[x][y]);
		}
		printf("\n");
	}
	printf("MATRIK B\n");
	for(x=0;x<a_cols;x++)
	{
		for(y=0;y<b_cols;y++)
		{
			printf("%d ",b[x][y]);
		}
		printf("\n");
	}

	do
	{
		printf("Silahkan pilih salah satu Percobaan :\n");
		printf("1. Penjumlahan\n");
		printf("2. Pengurangan\n");
		printf("3. Perkalian\n");
		printf("Pilihan Anda = ");
		scanf("%d",&pilihan);
		switch(pilihan)
		{
			case 1:
				addition(dest,a,b);
				break;
			case 2:
				subtraction(dest,a,b);
				break;
			case 3:
				multiplication(dest,a,b);
				break;
			default:
				return 0;
				break;
		}
		for(x=0;x<a_cols;x++)
		{
			for(y=0;y<b_cols;y++)
			{
				source[x][y]=dest[x][y];
			}
		}
		printf("Matrik Identitas = ");
		((isDiagonalMatrix(source)==1)) ? printf("Benar\n") : printf("Tidak\n");
		printf("Matrik Diagonal = ");

		printf("Matrik Diagonal = ");
		((isIdentityMatrix (source)==1)) ? printf(" Iya\n") : printf(" Tidak\n");
		printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037\n\n");
	}while (ulang ==0);

}

