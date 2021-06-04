#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	string str_conc1;
	str message = "PAKISTANISBESTCOUNTRY"
	int covert_zro = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int put_val_arr = 0;
	int for_ASCII = 0;
	
	cout << "enter the string: " ;
	getline(cin ,  str_conc1);
	int length = str_conc1.length();
	string a[5][5] ; 
	for (; i < 5 ; i++)
    {
        for(; j < 5 ; j ++)
        {
            for (; k == j ; k++ )
            {
                if ( put_val_arr < length)
                {
                    a[i][j] = str_conc1[put_val_arr]; 
                    put_val_arr++;
                    
                }
                else
                {
                    a[i][j] = char(65 + for_ASCII);
                    put_val_arr++;
                    for_ASCII++;
                    
                    }    
                
            }
         
        cout << a[i][j] << " ";
        }
    
    j = covert_zro;
    k = covert_zro;
    cout << endl;
    }
    
}
