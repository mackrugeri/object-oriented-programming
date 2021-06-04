#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
  int x;
  char y;
  char s;
  cout<<"enter value"<<endl;
  cin>>x;
  cout << x << endl;
  if(x >= 65 and x <=95 )
  {
  		cout<<"good"<<endl;
  		y = char(x);
  		cout<<y<<endl;
  }
  else
  {
  	cout << "bad";
  }
}
