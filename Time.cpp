#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class DateandTime
{
	private:
		int d;
		int m;
		int y;
		int h;
		int mm;
		int s;
	public:
		DateandTime()
		{
			d = 0;
			m = 0;
			y = 0;
			h = 0;
			mm = 0;
			s = 0;
		}
		~DateandTime()
		{
			h = 0;
			mm = 0;
			s = 0;
			d = 0;
			m = 0;
			y = 0;
		}
		void setDate(string Date)
		{
			int k = 0, j;
    		while(k < 2)
    		{
        		j = Date[k];
        		j = j - 48;
       			d = d +  j * pow(10,  1 - k);
       			k++;
    		}
    		k = 3;
    		while(k < 5)
    		{
        		j = Date[k];
        		j = j - 48;
       			m = m +  j * pow(10,  4 - k);
       			k++;
    		}

    		k = 6;
    		while(k < 10)
    		{
        		j = Date[k];
        		j = j - 48;
       			y = y +  j * pow(10,  9 - k);
       			k++;
    		}
		}
		void setTime(string Time)
		{
			int k = 0, j;
    		while(k < 2)
    		{
        		j = Time[k];
        		j = j - 48;
       			h = h +  j * pow(10,  1 - k);
       			k++;
    		}
    		k = 3;
    		while(k < 5)
    		{
        		j = Time[k];
        		j = j - 48;
       			mm = mm +  j * pow(10,  4 - k);
       			k++;
    		}

    		k = 6;
    		while(k < 8)
    		{
        		j = Time[k];
        		j = j - 48;
       			s = s +  j * pow(10,  7 - k);
       			k++;
    		}
		}
		int getHour()
		{
			return h;
		}
		void printHour(int h)
		{
			cout << h << endl;
		}
		int getMinute()
		{
			return mm;
		}
		void printMinute(int m)
		{
			cout << m << endl;
		}
		int getSecond()
		{
			return s;
		}
		void printSecond(int s)
		{
			cout << s << endl;
		}
		int getDay()
		{
			return d;
		}
		void printDay(int d)
		{
			cout << d << endl;;
		}
		int getMonth()
		{
			return m;
		}
		void printMonth(int m)
		{
			cout << m << endl;;
		}
		int getYear()
		{
			return y;
		}
		void printYear(int y)
		{
			cout << y << endl;
		}
		void printShortDate()
		{
			cout << d << "-" << m << "-" << y << endl;
		}
		void printShortTime()
		{
			if(h == 0)
			{
				h = 12;
				cout << h << ":" << mm << ":" << s << " am" << endl;
			}
			else
				if(h == 12)
				{
					cout << h << ":" << mm << ":" << s << " pm" << endl;
				}
				else
					if(h >= 13)
					{
						h = h - 12;
						cout << h << ":" << mm << ":" << s << " pm" << endl;
					}
					else
					{
					cout << h << ":" << mm << ":" << s << " am" << endl;
					}
		}
		void printDateTime()
		{
			if(h == 0)
			{
				h = 12;
				cout << h << ":" << mm << ":" << s << " am" << endl;
			}
			else
				if(h == 12)
				{
					cout << h << ":" << mm << ":" << s << " pm" << endl;
				}
				else
					if(h >= 13)
					{
						h = h - 12;
						cout << h << ":" << mm << ":" << s << " pm" << endl;
					}
					else
					{
					cout << h << ":" << mm << ":" << s << " am" << endl;
					}

		cout << d << "-" << m << "-" << y << endl;
		}
		void printDateEnglish()
		{
			string a;
			switch(m)
			{
				case 1:
					a = "jan";
					break;
				case 2:
					a = "feb";
					break;
				case 3:
					a = "march";
					break;
				case 4:
					a = "april";
					break;
				case 5:
					a = "may";
					break;
				case 6:
					a = "June";
					break;
				case 7:
					a = "july";
					break;
				case 8:
					a = "aug";
					break;
				case 9:
					a = "sept";
					break;
				case 10:
					a = "oct";
					break;
				case 11:
					a = "nov";
					break;
				case 12:
					a = "dec";
					break;
			}

		if(d == 3 || d == 23)
		{
			cout << d << " rd" << a << "," << y << endl;
		}
		else
		{
			if(d == 2 || d == 22)
			{
				cout << d << " nd" << a << "," << y << endl;
			}
			else
			{
				if(d == 1 || d == 21 || d == 31)
				{
					cout << d << " st" << a << "," << y << endl;
				}
				else
				{
					cout << d << " th" << a << "," << y << endl;
				}
			}
		}

	}
};

int main()
{
	DateandTime t;
	string a;
	cout << "enter the time in format HH:MM:SS" << endl;
	cin >> a;
	t.setTime(a);
	string b;
	cout << "enter the date in format DD-MM-YYYY" << endl;
	cin >> b;
	t.setDate(b);
	t.printDateTime();
	t.printDateEnglish();
	return 0;
}
