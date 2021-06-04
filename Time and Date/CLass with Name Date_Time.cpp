#include <iostream>
#include <string.h>
using namespace std;

class Date_Time{
	private:
		int day , month, year;
		char dash;
		string And;
		int HH , MM ,SS;
		string AM_PM;
	public:
		Date_Time(){
			day = 0;
			month = 0;
			year = 0;
			HH = 0;
			MM = 0;
			SS = 0;
			AM_PM = "AM";
			cout << "Inside  Contructor" << endl;
			cout << "Date: " << day << "-" << month << "-" << year << "  and Time: " << HH << ":" << MM << ":" << SS  << " " <<  AM_PM << endl;
			cout << endl;
		}
		Date_Time(int day, int month, int year,int HH,int MM, int SS,string AM_PM){
			cout << "Inside  Contructor with augrument" << endl;
			cout << "Date: " << day << "-" << month << "-" << year << "  and Time: " << HH << ":" << MM << ":" << SS  << " " <<  AM_PM << endl;
			cout << endl;
		}
		
		~Date_Time(){
			day = 0;
			month = 0;
			year = 0;
			HH = 0;
			MM = 0;
			SS = 0;
			
			cout << "Date of the Object has been removed: " << endl;
		}
		
		int EnterDate(){
			cout << "For Time Used AM Or PM Also" << endl;
			cout << "Input Date in that given formats (DD-MM-YYYY) ""and"" Time in that Given Format (HH:MM:SS)" << endl;
			cin >> day >> dash >> month >> dash >> year >> And >> HH >> dash >> MM >> dash >> SS;
			
			
			cout << endl;
		}
		
		
		int checkDateFormate(){
			if (day > 31 ||  day < 1)
				{
				cout << "Invalid Date: " << endl;
				cout << "Please Enter the Correct Day: " << endl;
				cout << "Pease Enter Date again: ";
				cin >> day;
				
				cout << endl;
				}
			
			if (month > 12 || month < 1)
				{
					cout << "Invalid month: " << endl;
					cout << "Please Enter the Correct month: "  << endl;
					cout << "Pease Enter month again: "<< endl;
					cin >> month;
					
					cout << endl;
				}
				
			if (year > 9999)
				{
					cout << "Invalid year: " << endl;
					cout << "Please Enter the Correct Year: " << endl;
					cin >> year;
					
					cout << endl;
					cout << endl;	
				}
		}
		
		int checkTimeFormate(){
			if (HH > 12 || HH < 1)
				{
					cout << "Invalid Hours: " << endl;
					cout << "Please Enter the Correct Hours: "  << endl;
					cout << "Pease Enter month again and write in 12-hour formate: "<< endl;
					cin >> HH;
					
					cout << endl;
				}
			if (MM > 12 || MM < 1)
				{
					cout << "Invalid Minutes: " << endl;
					cout << "Please Enter the Correct Minutes: "  << endl;
					cout << "Pease Enter month again and write in 60-minutes formate: "<< endl;
					cin >> MM;
					
					cout << endl;
				}
			if (SS > 12 || SS < 1)
				{
					cout << "Invalid Second: " << endl;
					cout << "Please Enter the Correct Second: "  << endl;
					cout << "Pease Enter month again and write in 60-second formate: "<< endl;
					cin >> SS;
					
					cout << endl;
				}
		}
		
		int sort_Day(){
			cout << "Enter the day: " << endl;
			cin >> day;
			cout << endl;
		}
		
		int sort_month(){
			cout << "Enter the month: " << endl;
			cin >> month;
			cout << endl;
		}
		
		int sort_year(){
			cout << "Enter the Year: " << endl;
			cin >> year;
			cout << endl; 
		}
		
		int print_short_Date(){
			cout << "There is your Short Date: " << endl;
			cout << "DD-MM-YYYY = " <<  day << "-" << month << "-" << year << endl; 
			cout << endl;
		}
		
		int date_english(){
			
			cout << "Here is your Date in English"  << endl;
			 string array[13] = {"month names","Jan","Feb","March","April","May","june","july","Aug","Step","Oct","Nov","Dec"};
			
		
				
			for (int i =1; i <= 12; i++){
				if ( month == i ){
					if( day == 1){
					cout << day << "st" << " " << array[i] << "," << year << endl;
					}
					if( day == 2){
					cout << day << "nd" << " " << array[i] << "," << year << endl;
					}
					if( day == 3){
					cout << day << "rd" << " " << array[i] << "," << year << endl;
					}
					if (day >3){
						cout << day << "th" << " " << array[i] << "," << year << endl;
					}
				
					}	
				
				}
				cout << endl;
       }
       
		int Print_Short_Time(){
			cout << "Here is your Short Time" << endl;
			cout <<"HH:MM:SS = " <<  HH << ":" << MM << ":" << SS << endl; 
			cout << endl;
		}
		
		int both_date_and_time(){
			cout <<  day << "-" << month << "-" << year << " and " << HH << ":" << MM << ":" << SS << endl;
			cout << endl; 
		}
		

};
int main(){	 
	int enter_type;
	int enter_type2;
	int enter_type3;

	// Declearing the Object
	Date_Time(0,0,0,0,0,0,"AM");
	Date_Time DateTime;
	DateTime.EnterDate();
	DateTime.checkDateFormate();
	DateTime.checkTimeFormate();
	 
	cout << "DO you want to change  Day so For Day press 1 and for move forward press any button" << endl;
	cin >> enter_type;
	if (enter_type == 1){
		DateTime.sort_Day();
	}
	
	cout << "Do you want to change month so For Month presss 2 and for move forward press any button" << endl;
	cin >> enter_type2;
	if (enter_type2 == 2){
		DateTime.sort_month();
	}
	
	cout << "Do you want to change year so for Year press 3 and for move forward press any button" << endl;\
	cin >> enter_type3;	
	if (enter_type3 == 3){
		DateTime.sort_year();
	}	
	
	DateTime.print_short_Date();
	DateTime.date_english();	
	DateTime.Print_Short_Time();
	DateTime.both_date_and_time();
	
}






















