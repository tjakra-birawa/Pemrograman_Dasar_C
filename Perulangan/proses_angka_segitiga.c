#include<iostream>
using namespace std;

int main()
{
	int x,y,kolom;
	kolom=5;
	for(x=kolom;x>=0;x--)
	{
		for(y=x;y<=kolom;y++)
		{
			cout<<y<< " ";
		}
		cout<<endl;
	}	
	for(x=1;x<=kolom;x++)
	{
		for(y=x;y<=kolom;y++)
		{
			cout<<y<< " ";
		}
		cout<<endl;
	}	
}




