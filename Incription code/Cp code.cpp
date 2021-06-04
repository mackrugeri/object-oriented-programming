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
//    cout << str_conc1 <<endl;
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
	int y =1;
// for storing two charater form the message of plain tex;

	string str_fst;
	string str_sec;
// for concatation :-
	string q;
	string w;
	string e;
	string con;

	
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
        
        x = x + 2;
        y = y + 2;
        
        int  row_ist;
        int column_ist;
        int  row_two;
        int  column_two;
        
        int row =0;
    	int column =0;
        for (int z =0 ; z<5 ;)
        {
        	if (a[row][column] == str_fst )
        	{
        		row_ist = row;
				column_ist = column;
			//	cout << row_ist << endl;
			//	cout << column_ist << endl;
			}
				column++;
			if (column == 5)
			{
				row++;
				column = 0;
				z++;
			}  
		}
			row = 0;
			column = 0;
			for (int r=0; r < 5 ;)
			{
				
				if (a[row][column] == str_sec)
				{
					
					row_two = row;
					column_two = column ;
				//	cout << row_two << endl;
				//	cout << column_two << endl;
				}
				column++;
				if (column == 5)
				{
					row++;
					column = 0;
					r++;
				}  
			}
			if (row_ist - row_two != 0 and column_ist !=column_two)
			{
				if (row_ist > row_two)
				{ 
					row_ist--;
					row_two++;
					q = a[row_ist][column_ist];
					w = a[row_two][column_two];
					e = q + w;	
				//	cout << a[row_ist][column_ist] << endl;
				//	cout << a[row_two][column_two] << endl;
					
				}
				else
				{
					row_ist++;
					row_two--;
					q = a[row_ist][column_ist];
					w = a[row_two][column_two];
					e = q + w;	
				//	cout << a[row_ist][column_ist] << endl;
				//	cout << a[row_two][column_two] << endl;	
				}
			} 
			if (row_ist == row_two)
			{ 
				if (column_ist < 4)
				{		
					column_ist++;
					q = a[row_ist][column_ist];	
				//	cout << a[row_ist][column_ist] << endl;		
				}	
				if (column_ist == 4)
				{
					column_ist =0;
					q = a[row_ist][column_ist];
				//	cout << a[row_ist][column_ist] << endl;	
				}
				if (column_two == 4)
				{
					column_two =0;
					w = a[row_two][column_two];
				//	cout << a[row_two][column_two] << endl;			
				}
				if(column_two < 4)
				{
					column_two++;
					w = a[row_two][column_two];
				//	cout << a[row_two][column_two] << endl;		
				}
				e = q + w;	
			}  
			if (column_ist == column_two)
			{	
			
				if (row_ist < 4)
				{
					row_ist++;
					q = a[row_ist][column_ist];
				//	cout << a[row_ist][column_ist] << endl;		
				}	
				if (row_ist == 4)
				{
					row_ist =0;
					q =a[row_ist][column_ist];
				//	cout << a[row_ist][column_ist] << endl;	
				}
				if(row_two < 4)
				{
					row_two++;
					w = a[row_two][column_two]; 
				//	cout << a[row_two][column_two] << endl;		
				}	
				
				if (row_two == 4)
				{
					row_two =0;
					w = a[row_two][column_two];
				//	cout << a[row_two][column_two] << endl;
						
				}
			e =q + w;	
		    }
		
		con = con + e ;
    }
    cout << endl;
    
    cout << "              Here is you encrypted text                 "<< endl; 
    cout << con << endl;
	
	string   pass_decry;
	cout <<endl;
	cout << "Enter the Password for Decryption" << endl;
	cin >> pass_decry;
	
	if (pass_decry == Password)
	{
		cout << Message << endl;
	}
	else
	{
		cout << "Password is incorrect" <<endl;
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
