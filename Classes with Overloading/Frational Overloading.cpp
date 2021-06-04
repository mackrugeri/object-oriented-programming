#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
class frational_class{
	private:
	    int	denominator,numerator;
	    char dash;
	    int fractional_array[2];
	public:
		int enter_value(){
			cout << "Enter Values in Fractional Form: ";
			cin >> numerator >> dash >> denominator;
		}
		int Check_fraction(){
			
			for (int i =0 ; ;i++){
				
				if (denominator == 0){
					cout << "Sorry you can't overload the operator Because your Fractional Answer is Infinite: " << endl;
					cout << "Enter NO. Again" << endl;
					enter_value();
					} 
				if (numerator == 0 ){
					denominator = 0;
				}
				else{
					break;
				}	
			}
		}
		
		int simplication(){
			int i =2;
			for (int j =0; j < 5; j++){
				for(; i < 10; i++){
		
					if (numerator%i == 0 && denominator%i == 0){
						numerator = numerator/i;
						denominator = denominator/i;
						cout << "After Simplication of Fractional Form: ";
						cout << numerator << dash << denominator << endl;
					}
				}
				i =2;
			}
			cout << endl;
		}	
			int operator + (frational_class F){
			cout << "Overloading of + Operator:" << endl;
			if (F.denominator == denominator){
				int denom_result = denominator;
				int num_result = F.numerator + numerator;
				cout << num_result << dash << denom_result;
				cout << endl;
			}
			else{
				int num_result=(denominator*F.numerator)+(F.denominator*numerator);
				int denom_result = F.denominator * denominator;
				cout << num_result << dash << denom_result << endl;
				cout << endl;
			}
		}
		int operator - (frational_class F){
			cout << "Overloading of - Operator:" << endl;
			if (F.denominator == denominator){
				int denom_result = denominator;
				int num_result = F.numerator - numerator;
				if (num_result == 0){
						denom_result == 0;
						cout << num_result << endl;	
				}
				else{
					cout << num_result << dash << denom_result;	
				} 
				
				cout << endl;
			}
			else{
				int num_result=(F.denominator*numerator) - (denominator*F.numerator);
				int denom_result = F.denominator * denominator;
				cout << num_result << dash << denom_result << endl;
				cout << endl;
			}
		}
		int operator * (frational_class F){
			cout << "Overloading if * Operator: " << endl;
			int num_result = F.numerator * numerator;
			int denom_result = F.denominator * denominator;
			cout << num_result  << dash << denom_result << endl;
			cout << endl; 
		}
		frational_class operator --(){
			cout << "Overloading of Per Decrement: " << endl;
			frational_class F;
			int num_result  = numerator - denominator ;
			cout << num_result  << dash << denominator << endl;
			cout << endl;
			return F;
		}
		
		frational_class operator --(int){
			cout << "Overloading of Post Decrement: " << endl;
			frational_class F;
			int num_result  = numerator - denominator ;
			cout << numerator  << dash << denominator << endl;\
			cout << endl;
		}
		frational_class operator ++(){
			cout << "Overloading of Per Increment: " << endl;
			frational_class F;
			int num_result  = numerator + denominator ;
			cout << num_result  << dash << denominator << endl;
			cout << endl;
		}
		frational_class operator ++(int){
			cout << "Overloading of Post Increment: " << endl;
			frational_class F;
			int num_result  = numerator + denominator ;
			cout << numerator  << dash << denominator << endl;\
			cout << endl;
		}
		int operator > (frational_class F){
			cout << "Overloading of > operator" << endl;
			if(denominator < F.denominator ){
				cout << "F1 object is greater than F2 object" << endl;
			}			
			else if (F.denominator == denominator){
				if (numerator > F.numerator){
					cout << "F1 object is greater than F2 object" << endl;
				}
				else{
					cout << "F1 object is not greater than F2 object" << endl;
				}
			}
			else{
				cout << "F1 object is not greater than F2 object" << endl;
			}
			cout << endl;
		}
		
		int operator < (frational_class F){
			cout << "Overloading of < operator" << endl;
			if(denominator > F.denominator ){
				cout << "F1 object is smaller than F2 object" << endl;
			}			
			else if (denominator == F.denominator){
				if (numerator < F.numerator){
					cout << "F1 object is smaller than F2 object" << endl;
				}
				else{
					cout << "F1 object is not smaller than F2 object" << endl;
				}
			}
			else{
				cout << "F1 object is not smaller than F2 object" << endl;
			}
			cout << endl;
		}
		
		int operator = (frational_class F){
			cout <<"Overloading of = Operator" << endl;
			if (numerator == F.numerator && denominator == F.denominator){
				cout << "F1 object is equal to F2 object" << endl;
			}
			else{
				cout << "F1 object is not equal to F2 object" << endl;
			}
			cout << endl;
		}
		
		int operator >= (frational_class F){
			cout << "Overloading of >= Operator" << endl;
			if (numerator == F.numerator && denominator == F.denominator){
				cout << "F1 object is either greater or equal to F2 object" << endl;
			}
			else{
					if(denominator < F.denominator ){
					cout << "F1 object is either greater or equal to F2 object" << endl;
				}			
				else if (denominator == F.denominator){
					if (numerator > F.numerator){
						cout << "F1 object is either greateror equal to F2 object" << endl;
					}
					else{
						cout << "F1 object is neither greater nor equal  to F2 object" << endl;
					}
				}
				else{
					cout << "F1 object is neither greater nor equal to F2 object" << endl;
				}
				
			}
			cout << endl;
		}
		
		int operator <= (frational_class F){
			cout << "Overloading of =< Operator" << endl;
			if (numerator == F.numerator && denominator == F.denominator){
				cout << "F1 object is either smaller or equal to F2 object" << endl;
			}
			else{
					if(denominator > F.denominator ){
					cout << "F1 object is either smaller or equal to F2 object" << endl;
				}			
				else if (denominator == F.denominator){
					if (F.numerator > numerator){
						cout << "F1 object is either greateror equal to F2 object" << endl;
					}
					else{
						cout << "F1 object is neither greater nor equal  to F2 object" << endl;
					}
				}
				else{
					cout << "F1 object is neither greater nor equal to F2 object" << endl;
				}
			}
			cout << endl;
		}
		
      int& operator[] (int n) {
	      	if( n< 0 || n>=2 )
				{     
					cout << "Index out of bounds" <<endl;   
				}
		cout << endl;
		print_array();
        return fractional_array[n];
        
     	}
      void print_array()
		{	
	    for (int j=0; j < 2; j++)
	        cout << "fractional_array[" << j << "] = " <<  fractional_array[j] << "\n";
		}	   
		
		
		friend istream& operator >> (istream& input ,frational_class& F)
		{
			char dash1;
			cout << "Overloading of  >> opertor: " << endl;
			cout << "Enter the Numenator and  Denominator in Fractional Form: " ;
			input >> F.numerator >> dash1 >>  F.denominator;
			F.simplication();
			cout << endl;
		}
		friend ostream& operator << (ostream& input ,frational_class& F)
		{
	
			cout << "Overloading of  << opertor: " << endl;
			cout << "Here is the output of Frational Form: " ;
			input << F.numerator << "/" <<  F.denominator << endl;;
			cout << endl;
		}
};
int main(){
	frational_class F1,F2,F3;
	
	F1.enter_value();
	F1.Check_fraction();
	F1.simplication();
	F2.enter_value();
	F2.Check_fraction();
	F2.simplication();
	F1 + F2;
	F1 - F2;
	F1 * F2;
	--F1;
	F1--;
	++F1;
	F1++;
	F1 > F2;
	F1 < F2;
	F1 = F2;
	F1 >= F2;
	F1 <= F2;
	cout << "Enter the value for F1" << endl;
    cin>>F1;
    cout << "Enter the value for F2" << endl;
    cin >> F2;
    cout << "Output of Fractional Form for F1" << endl;
    cout << F1;
    cout << "Output of Fractional Form for F2" << endl;
    cout << F2;
    for (int i=0; i < 2; i++){
    	 F1[i] = i*10; 
	}
}






































