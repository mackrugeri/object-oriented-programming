#include <iostream>
using namespace std;

int  arry[2][2][5];
int z = 1;
int temp = 0 ;


int d_arry()
{
	 cout << "enter the value for arry" << endl;
    for (int a = 0; a < 2 ; a++)
    {
        for (int b = 0; b <2 ; b++)
        {
            for (int c = 0; c < 5 ; c++)
            {
            	cin >> z;
                arry[a][b][c] = z ;   
                
            }
       
        
        }
    }

  cout << endl;  
  cout << " Here is your arry " << endl;
    for (int i = 0; i < 2 ; i++)
    {
        for (int j = 0; j <2 ; j++)
        {
            for (int k = 0; k < 5 ; k++)
            {
              cout << arry[i][j][k] << " ";
            }
        
        }
      cout << endl;
    }
    
	  cout << endl;
	  cout << "Here is arry which is ascending" << endl;
	  for (int l =0 ; l < 20 ; l++)
	  {
	   for (int i = 0; i < 2 ; i++)
	    {
	        for (int j = 0; j < 2 ; j++)
	        {
	            for (int k = 0; k < 5 ; k++)
	            {
	                      if (arry[i][j][k] < arry[i][j][k+1] )
	                      {
	                        temp = arry[i][j][k];
	                        arry[i][j][k] = arry[i][j][k+1];
	                        arry[i][j][k+1] = temp;
	                        
	                      } 
	            }         
	        }
	    }
	  }
	  
	for (int a = 0; a < 2 ; a++)
    {
        for (int b = 0; b <2 ; b++)
        {
            for (int c = 0; c < 5 ; c++)
            {
            cout << arry[a][b][c] << " ";   
            }
       
        
        }
        cout << endl;
    }  
	
}


int main ()
{ 
	d_arry();
}
