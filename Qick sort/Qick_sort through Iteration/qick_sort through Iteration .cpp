#include <iostream>
using namespace std;


int qick_sort()
{
	int arry[5];
	int e;
	int temp;
	int i = 0;
	int j = 4;
	int swap = 0;
	
	cout <<"Getting the Value Here" << endl;
	for (int a =0 ; a <5; a++)
	{
		cout << "Enter the " << a+1 << " number" << endl;
		cin >> e;
		arry[a] = e ;
	}
	
	cout << "Here is you arry " << "= [";
	for (int w =0; w < 5; w++)
	{
			
		cout << arry[w] << " " ;
	}
	cout << "]";
	cout << endl;

	for (int w =0 ; w < 10 ; w++)
	{
		if (arry[i] > arry [j])
		{
			temp = arry[i];
			arry[i] = arry [j];
			arry[j] = temp;
			i++;
			cout<< "here fh" << i << endl ;
			cout << "hello rth" << j << endl;
			if (i == j)
			{
				cout << i;
				cout << j;
				j--;
				i =0;
				}	
		}
		else{
		i++;
		cout<< "here" << i << endl ;
		cout << "hello" << j << endl ;
			if (i == j)
			{
				cout << i << endl ;
				cout << j << endl;
				j--;
				i =0;
				}	
		}
	}
	
	
	cout << "Here is you arry(qick sort)"<< endl;
	for (int i =0; i < 5; i++)
	{
			
		cout << arry[i] << " ";
	}
	cout << "]";
	cout << endl;


	
}

int main ()
{
	qick_sort();
}

