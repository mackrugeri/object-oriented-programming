#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;



string function(string Message , string Password) 
{

/* This varaible is used for converting the string into capital of Message */

	string str = Message;
	char cap;
	int l = 0 ;
	string str_conc;
	
/* This varaible is for ASCII value */

	int value;
	 	
/* This code step is converting the string into capitalization */

	while (str[l])
	  {
	    cap=str[l];
	    char conv_up =(toupper(cap));
	    l++;
	    value=int(conv_up);
	    
	    
/* Taking the only capital values */

		if (value >=65 and value <=90)
		{
			str_conc = str_conc + conv_up;
			
		}
	  }
/* ------------------------------------------------------------------------------------------------------------------------------ */
/// Now For Password;;;

/* This varaible is used for coverting the string into capital of Password */

	string str1 = Password;
	char cap1;
	int m = 0 ;
	string str_conc1;
	
//This varaible is for Ascii value

	int value2 = 0;

// This code  step is converting the string into capitalization
	
	while (str1[m])
	{
		cap1 = str1[m];
// Here toupper is used to convert the lower case into upper case 
		char conver_up = (toupper(cap1));
		m++;
		value2 = int(conver_up);
		
// Taking the only capital values 

		if (value2 >=65 and value2 <=90)
		{
// str_conc = string started concatenation one by one
			str_conc1 = str_conc1 + conver_up;
			
		}
	  }
	  
	//cout << str_conc1 << endl;
	cout << endl;
	
	
// removing the repeating in the  password 
// In this code first of all i will concat the Alphabat with password than i will remove the remove the repeation


    string alphabat = "ABCDEFGHIKLMNOPQRSTUVWXYZ";    
    str_conc1 = str_conc1 + alphabat;
    cout << str_conc1 <<endl;
    string str2;

    int pos;
    for(int i = 0; i < str_conc1.length(); i++)
    {
        if( (pos = str2.find(str_conc1[i])) < 0)
        {
            str2 += str_conc1[i];
        }
        
    
    }

	
// Making a table for the encription 
// varaible which use for it

	int covert_zro = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int put_val_arr = 0;
	int for_ASCII = 0;
	
// code for encription Table
	int length = str2.length();
	string a[5][5] ; 
	for (; i < 5 ; i++)
    {
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
// Here the varaible "covert_zro is basically used for again change the value of j and k into zero   
    j = covert_zro;
    k = covert_zro;
    cout << endl;
    }
    				
/* ------------------------------------------------------------------------------------------------------------------------------ */
// taking the first two value from the string 
// for length

	int len = 0 ;
	int x =0;
	int y =0;
// for storing two charater form the message of plain tex;

	char str_fst;
	char str_sec;
	
	len = str_conc.length();
	if (len%2 == 0)
    {
        len = len/2;
    }
    else
    {
        str_conc = str_conc + 'X';
        len = str_conc.length();
        len = len/2;
    }
    for (int i =0;i < len; i ++ )
    {
        str_fst = str_conc[x];
        str_sec = str_conc[y];
        cout << "I am in a: " << str_conc[x] << endl;
        cout << "I am in b: " << str_conc[y] << endl;
        x = x + 2;
        y = y + 2;
    }
			
}


int main()
{
	string Message;
	string Password;
	
	cout << "Enter the Message which you want to secure" << endl;
	getline(cin , Message);
	cout << endl;
	
	cout << "Enter the Password" << endl;
	getline(cin, Password);
	cout << endl;
	
	function (Message,Password);
}
