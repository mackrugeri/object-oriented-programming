#include <iostream>
#include <string>
using namespace std;
int main()
{

	string str2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int covert_zro = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int put_val_arr = 0;
	int for_ASCII = 0;
	char n;
	cout << "enter the value you want too find: "<< endl;
	cin >> n;
	
// code for encription Table
	int length = str2.length();
	char a[5][5]; 
	for (; i < 5 ; i++)
    {
    	//cout <<"Here it value of: " << j << endl;
    	//cout <<"Here it value of: " << k << endl;
	   for(; j < 5 ; j++)
        {
            for (; k == j ; k++ )
            {
                if ( put_val_arr < length)
                {
                
                    a[i][j] = str2[put_val_arr]; 
                    put_val_arr++;
                    
                }
      
            }
         
        cout << a[i][j] << " ";
        }
        cout << endl;
        j = 0;
        k = 0;
    }
    i = 0;
    j = 0;
    for (int z = 0; z < 5; )
    {
    	if(a[i][j]==n)
		{
			cout << "It is value of i: " << i << endl;
			cout << "It is value of j: " << j << endl;	
		}
		j++;
		if (j == 5)
		{
			i++;
			j = 0;
			z++;
			}	    	
	}
}
