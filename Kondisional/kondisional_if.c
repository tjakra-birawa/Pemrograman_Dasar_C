#include <stdio.h>

int main(){
	int b;
	float imt,t;
	
	printf("Berat badan (kg) : ");
		scanf("%d",&b);
	printf("Tinggi badan (m) : ");
		scanf("%f", &t);
	imt = b / (t*t);
	printf("IMT    = %.2f ", imt);
	
	if (imt <= 18.5 )
	{
		printf("Termasuk Kurus \n");
	} 
	else if (18.5 < imt && imt <= 25.00)
	{
		printf("Termasuk Normal \n");	
	} 
	else if (25.00 < imt && imt <= 30.00)
	{
		printf("Termasuk Gemuk \n");
	} 
	else 
	{					
		printf("Kegemukan \n");			
	}
	
	printf("Cakra Bhirawa,Universitas Brawijaya - Teknik Komputer 175150307111037");
}
