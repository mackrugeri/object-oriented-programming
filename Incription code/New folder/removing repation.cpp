#include <iostream>
#include <string.h>

using namespace std;

/*int main()
{
	string message;
	cout << "enter your massage" << endl;
	cin >> message;	
	for(int i=0; i < 10 ; i++)
	
	{
		char x = message[i];
		for (int j = 0; j< 9 ; j++ )
		{
		if (message[i] == message[i+j])
		{
			cout << message[i] << endl;
			cout <<	"---------------------------------------------------------------------------" << endl;
			cout << message[i+1]<<endl;		
		}
			
		}
		
	}	
	
}*/

int main()
{
		
	string key = "COLLEGE";
	string str2;
	cout << "Key = " << key << endl;;
	int pos;
	for(int i = 0; i < key.length(); i++)
	{
		if( (pos = str2.find(key[i])) < 0)
		{
			str2 += key[i];
		}
		
	cout << str2 << endl;
	
	}
}
