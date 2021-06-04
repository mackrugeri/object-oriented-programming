#include <iostream>
#include <string>
using namespace std;

int main()
{
  string message = "AHSANCHUGHTAI";
  string car = message;
  int len = car.length();
  for (int i=0; i < 10 ; i ++)
  {
  	string a = message.erase(i);
  	cout << a << endl;
  }
}


