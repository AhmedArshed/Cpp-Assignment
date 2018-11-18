#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class DateandTime{
	private:
		
		int hours , mints ,sec , date , year, month;
		char one , two ,three , four;
	public:
DateandTime()
    {
    	
	}

		void setTime(int h , int min,int second)
		{
		hours = h;
		mints = min;
		sec = second;
	}
	void setDate(int dd ,int mm,int yy)
	{
		date = dd;
		month = mm;
		year =yy;
	}
    	int getTime()
    	{
    		cout << "Enter the time in this formate  HH:MM:SS"<<endl;
   		 	cin >> hours >> one >> mints >>two >> sec;
		}

	int getDate()
    {
    	cout << "Enter the date in this formate  day/month/year"<<endl;
    	cin >> date >> three >> month >> four >> year;
	}

void Date_only()
{
	if (date <= 31 && month <= 12)
	cout<<"date is :  " << date << "-" << month << "-" << year << endl;
	else
	cout<<"Wrong Date";
}
void time_only()
{
	if(hours <= 12 && mints <= 60 && sec <= 60)
		cout<<" time is :  "<< hours << ":" << mints << ":" << sec <<" am "<< endl;
	if(hours > 12 && mints <= 60 && sec <= 60)
		cout<<" time is :  "<< hours -12 << ":" << mints << ":" << sec <<" pm "<< endl;
	if(hours <= 12 && mints > 60 && sec <= 60)
		cout<<" time is :  "<< hours +1 << ":" << mints-60 << ":" << sec <<" pm "<< endl;
	if(hours <= 12 && mints <= 60 && sec > 60)
		cout<<" time is :  "<< hours  << ":" << mints + 1 << ":" << sec - 60 <<" pm "<< endl;
	else
		cout<<"Wrong Time";
}
void DateTime()
{
	if (date <= 31 && month <= 12 && hours <= 12 && mints <= 60 && sec <= 60)
	cout<<"Date :"<<date<<"-"<<month<<"-"<<year<<"Time :"<<hours <<" : "<< mints <<" : "<<sec <<"am"<<endl;
	if (date <= 31 && month <= 12 && hours > 12 && mints <= 60 && sec <= 60) 
		cout<< "Date :"<< date << "-" << month<< "-" << year <<" Time is :  "<< hours -12 << ":" << mints << ":" << sec <<" pm "<< endl;
	else
		cout<<"Wrong Time";

}
void DateinEnglish()
{
	string mon [12] ={"January ","February" , "March " ,"April" ,"May", "June" ,"July","August", "September","Octuber","Nov","Dec"};
	if (date == 1 || date == 21 || date == 31)
	{
		cout<<"English Date  "<<date<<"st"<<month[mon -1]<<","<<year<<endl;
		}
	if (date = 2)
	{
		cout<<"English Date  "<<date<<"nd"<<month[mon -1]<<","<<year<<endl;
		}
	if (date = 3)
	{
		cout<<"English Date  "<<date<<"rd"<<month[mon -1]<<","<<year<<endl;
		}	
	else
	{
		cout<<"English Date  "<<date<<"th"<<month[mon -1]<<","<<year<<endl;
		}	
	}
};

int main()
{
	DateandTime d1;
	d1.setDate(2,4,1998);
	d1.setTime(2,3,12);
	d1.getDate();
	d1.getTime();
	d1.Date_only();
	d1.time_only();
	d1.DateTime();
	d1.DateinEnglish();
}

