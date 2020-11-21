#include<stdio.h>

int x,y,z,o;
void pascal(int);

int main()
{
	int n=9;
    printf("SEGITIGA PASCAL\n\n");    
		pascal(n);
    printf("\n");    

 	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
    return 0;
}

void pascal(int n)
{
	for (x=0; x<=n; x++)
	{
    	for (y=0; y<=((2*n)-(2*x)); y++)
		{
        	printf(" ");
        }
        for (z=0; z<=x; z++)
		{
            if (z==0||x==z)
			{
            	o=1;
            }
            else
			{
                o=o*(x+1-z)/z;
            }
            printf("%4d", o);
        }
        printf("\n");
	}

}
