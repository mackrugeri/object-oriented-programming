#include <iostream>
using namespace std;

int temp = 0;
int i =0;
int j =4;

void read_Arry(int x[])
{
	
	for (int i =0; i < 5 ; i++)
	{
		cout << "enter the " << i+1 << " value" << endl;
		cin >> x[i];
	}
		
}


int recusion (int arry1[5])
{
	
	if (j == 0)
	{
		return 0;
	}
	
	else{
			if (j == 0)
			{
				return 0;
				}	
			if (arry1[i] > arry1[j])
			{
				temp = arry1[i];
				arry1[i] = arry1[j];
				arry1[j] = temp;
				i++;
				if (i == j)
					{
						j--;
						i =0;
					}
				recusion (arry1);	
			}
			else{
			i++;
				if (i == j)
				{
					j--;
					i =0;
				}
			recusion (arry1);	
			}
		}
	
}


void Print_Arry(int arry1[])
{
	cout << "[ " ;
	for (int u =0; u < 5 ; u++)
	{
		cout  << arry1[u] <<" ";
	}
	cout << "]" << endl;		
}



int main ()
{
	int arry[5];
	read_Arry(arry);
	recusion(arry);
	Print_Arry(arry);
	
}
