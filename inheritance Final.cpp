#include<iostream>
#include<string.h>
using namespace std;

class publication{
	private:
	string title; 
	float price;
	public:
		publication()
		{
			title = " ";
			price = 0.0;
		}
//		~publication()
//		{
//			title = "";
//			price = 0.0;
//		}
		void get_data()
		{
			cout<<"Enter a string";
			cin >> title;
			cout << endl <<"Enter a price";
			cin >> price;
		
		}	
		void putdata() 
		{
			cout<<title;
			cout<<price;
		}
};
class sales
{
	private:
		float array[3];
	public:
		sales()
		{
		array [3]=0;
		}
	void get_data()
	{
		for(int i =0 ;i<=3 ;i++)
		{
			cin >> array[i];
		}
	}
	void putdata()
	{
		for(int j =0 ;j <=3 ;j ++)
		{
			cout<<array[j];
		}
	}
};
class book : public publication ,sales
{
	private:
		int page_count;
	public:
		book(){
		page_count= 0;
		}
	void get_data()
	{
		cout << "Enter Number of pages";
		cin >> page_count;

		publication :: get_data();
		sales :: get_data();
	}
		void putdata() 
		{
			cout<<page_count;
			publication :: putdata();
			sales :: putdata();
		}
	
};
class tape: public publication , sales
{
	private:
		 float playing_time; 	
	public:
		tape()
		{
		playing_time = 0.0;
		}
	void get_data()
	{
		cout << "Enter playing_time";
		cin >> playing_time;
		publication :: get_data();
		sales :: get_data();
	}
		void putdata() 
		{
			cout<< playing_time;
			publication :: putdata();
			sales :: putdata();
		}
	
	
};

int main()
{
	tape t1;
	t1.get_data();
	t1.putdata();
	book b1;
	b1.get_data();
	b1.putdata();
}
