#include<iostream>
using namespace std;

class fraction{
	friend ostream& operator <<(ostream& a, fraction& f1);
	friend istream& operator >>(istream& b, fraction& f1);
		
	private:
		int numerator,denominator;
		char one,two,three;
		int array[];
	public:
fraction()
	{
	numerator = 0;
	denominator = 0;
	}
~fraction()
	{
		numerator = 0;
		denominator = 0;
	}
void get_fraction()
    {
    	cout << "Enter a fraction in the form a/b"<<endl;
   		cin >> numerator >> one >> denominator;
	}
void show_fraction()
	{
		cout << "Freaction you Enter is"<<endl;
		cout<< numerator << one << denominator <<endl;

	}
void LCM ()
	{
	int max =1;
	while(max <=numerator || max <= denominator )
	{
		if(numerator % max == 0 && denominator % max == 0 )
		{
			numerator /= max;
			denominator /= max;
		}
		max++;
	}
	if (numerator % 2 == 0 && denominator % 2 == 0 )
		{
		LCM ();
		}
	
	}
fraction operator +(const fraction &f2)
	{
		cout << "operator +" <<endl;
		fraction f3;
		if (denominator == f2.denominator)
		{
			numerator = numerator + f2.numerator;
			LCM ();
		}
		else
		{
			numerator = numerator*f2.denominator + denominator*f2.numerator;
			denominator = denominator * f2.denominator;
			LCM ();
		}
		f3.numerator = numerator;
		f3.denominator = denominator;

		cout<<f3.numerator <<"/" <<f3.denominator <<endl;
	}
fraction operator -(const fraction &f2)
	{
		cout << "operator -" << endl;
		fraction f3;
		if (denominator == f2.denominator)
		{
			numerator = numerator - f2.numerator;
			LCM ();
		}
		else
		{
			numerator = numerator*f2.denominator - denominator*f2.numerator;
			denominator = denominator * f2.denominator;
			LCM ();
		}
		f3.numerator = numerator;
		f3.denominator = denominator;
		
		cout<< f3.numerator << "/" <<f3.denominator <<endl;
	}
	
fraction operator *(const fraction &f2)
	{
		cout << "operator *"<<endl;
		fraction f3;
		f3.numerator = numerator * f2.numerator;
		f3.denominator = denominator * f2.denominator;
		LCM ();
		
	cout << f3.numerator << "/" <<f3.denominator << endl;
	}
	
fraction operator /(const fraction &f2)
	{
		cout << "operator /"<<endl;
		fraction f3;
		f3.numerator = numerator * f2.denominator;
		f3.denominator = denominator * f2.numerator;
		LCM ();
		
		cout << f3.numerator << "/" << f3.denominator << endl;
	}
	
fraction operator += (const fraction &f2)
	{
		cout << "operator +=" <<endl;
		if (denominator == f2.denominator)
		{
			numerator = numerator + f2.numerator;
			LCM();
		}
		else
		{
			numerator = numerator*f2.denominator + denominator*f2.numerator;
			denominator = denominator * f2.denominator;
			LCM ();
		}
		
		cout<<numerator <<"/" <<denominator <<endl;
	}
fraction operator -=(const fraction &f2)
	{
		cout << "operator -=" <<endl;
		if (denominator == f2.denominator)
		{
			numerator = numerator - f2.numerator;
			LCM ();
		}
		else
		{
			numerator = numerator*f2.denominator - denominator*f2.numerator;
			denominator = denominator * f2.denominator;
			LCM ();
		}
		
		cout<<numerator <<"/" <<denominator <<endl;
	}
fraction operator *=(const fraction &f2)
	{
		cout << "operator *=" <<endl;
		numerator = numerator * f2.numerator;
		denominator = denominator * f2.denominator;
		LCM ();
		
	cout << numerator << "/" << denominator << endl;
	}
	
fraction operator /=(const fraction &f2)
	{
		cout << "operator /=" <<endl;
		numerator = numerator * f2.denominator;
		denominator = denominator * f2.numerator;
		LCM ();
		
		cout << numerator << "/" << denominator << endl;

	}
	
fraction operator ++()
	{
		cout << "operator ++" <<endl;
		numerator += denominator;
		cout << numerator <<"/"<< denominator <<endl;
	}
fraction operator--()
	{
		cout << "operator --" <<endl;
		numerator -= denominator;
		cout << numerator <<"/"<< denominator <<endl;
	}
fraction operator ++(int)
	{
		cout << "operator ++" <<endl;
		fraction f3;
		f3.numerator = numerator;
		f3.denominator = denominator;
		numerator += 1;
		denominator += 1;
		LCM ();
		cout << f3.numerator <<"/"<< f3.denominator <<endl;
	}
fraction operator --(int)
	{
		cout << "operator --" <<endl;
		fraction f3;
		f3.numerator = numerator;
		f3.denominator = denominator;
		numerator -= 1;
		denominator -= 1;
		LCM ();
		
		cout << f3.numerator <<"/"<< f3.denominator <<endl;
		
	}
	
int operator ==(const fraction &f2)
	{
	cout <<"operator ==";
	if(numerator == f2.numerator && denominator == f2.denominator){
		return 1;
		cout << endl;
	}
	else
	{
		return 0;
		cout << endl;
	}
}

int operator !=(const fraction &f2)
{
	cout <<"operator != ";
	if(numerator == f2.numerator && denominator == f2.denominator)
	{
		return 0;
		cout << endl;
	}
	else
	{
		return 1;
		cout<< endl;
	}
}

int operator <(const fraction &f2)
{
	cout <<"operator <";
	if(numerator < f2.numerator && denominator < f2.denominator)
	{
		return 1;
		cout << endl;
	}
	else
	{
		return 0;
		cout << endl;
	}
}

int operator >(const fraction &f2)
{
	cout <<"operator >";
	if(numerator > f2.numerator && denominator > f2.denominator)
	{
		return 1;
		cout << endl;
	}
	else
	{
		return 0;
		cout << endl;
	}
}


int operator <=(const fraction &f2)
{
	cout <<"operator <=";
	if(numerator == f2.numerator && denominator == f2.denominator)
		{
		return 1;
		cout << endl;
	}
	else if (numerator < f2.numerator && denominator < f2.denominator)
	{
		return 1;
		cout << endl;
	}
	else
	{
		return 0;
		cout << endl;
	}
}

int operator >=(const fraction &f2)
{
	cout <<"operator >=";
	if(numerator == f2.numerator && denominator == f2.denominator)
	{
		return 1;
		cout<< endl;
	}
	else if (numerator > f2.numerator && denominator > f2.denominator)
	{
		return 1;
		cout << endl;
	}
	else
	{
		return 0;
		cout << endl;
	}
}


};

ostream& operator <<(ostream& a, fraction& f1)
{
	cout <<"operator <<";
	a << f1.numerator << f1.one << f1.denominator;
	return a;
	cout << endl;
 } 
istream& operator >> (istream& b, fraction& f1)
 {
 	cout <<"operator >>";
 	b >> f1.numerator >> f1.one >> f1.denominator;
 	return b;
 	cout << endl;
 }
int main()
{
	fraction f1,f2;
	f1.get_fraction();
	f2.get_fraction();
	f1.operator +(f2);
	f1.operator -(f2);
	f1.operator *(f2);
	f1.operator /(f2);
	f1.operator == (f2);
	f1.operator != (f2);
	f1.operator <(f2);
	f1.operator >(f2);
	f1.operator <=(f2);
	f1.operator >=(f2);
	f1.operator +=(f2); 
	f1.operator -=(f2);
	f1.operator *=(f2);
	f1.operator /=(f2);   
	
	f1++;
	f1.show_fraction();
	
	++f1;
	cout<<f1;
	
	f1--;
	f1.show_fraction();
	--f1;
	cout << f1 << endl;
	
	cin >> f1;
	cout << f1;

	}
