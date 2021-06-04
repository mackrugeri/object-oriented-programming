#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main ()
{
	string Massage;
	cin >> Massage ;
	int i=0;
	string str = Massage;
	char c;
	while (str[i])
	  {
	    c=str[i];
	    putchar (toupper(c));
	    i++;
	  }
	  return 0;
}
