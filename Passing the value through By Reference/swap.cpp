#include <iostream>
using namespace std;

int swap (int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main()
{
	int a = 3;
	int b = 4;
	
	swap();
	
	cout << "here is the value of " << a << "and here is the of " << b;
}
