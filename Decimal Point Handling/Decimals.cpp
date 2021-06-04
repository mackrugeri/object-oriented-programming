#include <iostream>
#include <math.h>
using namespace std;
/*using namespace std;

long gcd(long a, long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
        
    else if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);

}
void foo(double input)
{
    double integral = floor(input);
    double frac = input - integral;

    long precision = 1000000000;
    long gcd_ = gcd(round(frac * precision), precision);

    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;

    cout << numerator << " / " << denominator << std::endl;
}

int main()
{
	foo(3.3);
}
int main (){
	int de,no;
	char dash;
	int i =2;
	
	cin >> de >> dash >> no;
	for (int j =0; j < 5; j++){
		for(; i < 10; i++){
			if (de%i == 0 && no%i == 0){
				de = de/i;
				no = no/i;
				cout << de << dash << no << endl;
			}
	}
	i = 2;
	}
}*/
#include <iostream>
using namespace std;
class MyClass
{
public:
    MyClass()  :  varI(0),varF(0) {}
    MyClass(int i,float f): varI(i),varF(f) {}
    int getVarI()           {  return varI;  }
    float getVarF()         {  return varF;  }
     void setVarI(int i)     {varI=i;}
    void setVarF(float f)   {varF=f;}
private:
    int varI;
    float varF;
};
ostream& operator<<(ostream& out,MyClass & o)
{
    out<<o.getVarI()<<"-"<<o.getVarF()<<endl;
    return out;
}
istream& operator>>(istream &input,MyClass &o)
{
    input>>o.setVarI(o.varI);
    input>>o.setVarF(o.varF);
    return input;
}

int main()
{
    MyClass o1(2,33.3);
    cout<<o1;
    MyClass o2;
    cout<<"Enter int and float: ";
    cin>>o2;
    cout<<"The entered numbers are: ";
    cout<<o2;

}
Edit & Run

























