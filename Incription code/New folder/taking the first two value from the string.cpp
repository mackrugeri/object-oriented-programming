#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int x = 0;
    int y = 1;
    char a;
    char b;
    string message = "AHSANALICHUGHTAIW";
    int length = message.length();
    if (length%2 == 0)
    {
        length = length/2;
    }
    else
    {
        message = message + 'X';
        length = message.length();
        length = length/2;
    }
    for (int i =0;i < length; i ++ )
    {
        a = message[x];
        b = message[y];
        cout << "I am in a: " << message[x] << endl;
        cout << "I am in b: " << message[y] << endl;
        x = x + 2;
        y = y + 2;
    }
}
