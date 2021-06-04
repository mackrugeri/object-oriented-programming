#include <iostream>
using namespace std;

int main()
{
	char a[5][5];
	
	for (int i = 0; i < 5 ; i ++)
	{
		for (int j=0 ; j < 5 ; j++)
		{
			a[i][j] = 2*2;
			cout <<a[i][j] << " ";
			
			}
		cout << endl;	
	}
	
	
}
