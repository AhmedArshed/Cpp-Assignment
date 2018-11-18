#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class like{
	public:
		void amount()
		{
			int like;
			string c ,s;
			int a;
			cout << "Enter 1 for like , 2 for comment , 3 for unlike ";
			cin >> a;
			if(a ==1)
				like = like + 1;
			else if(a ==2)
				{
					cout << "Write a comment ";
					cin >> s;
					s = s + c;
				}
			else if (a == 3)
				like = like -1;
			else
				cout <<"wrong number";
		}
};

class post
{
	public:
		void new_post()
		{
			int a;
			string x;
			cout << "Wright a new post ";
			cin >> x;
			like l;
			cout << "Enter 1 if you want to like or comment on post ";
			cin >> a;
			if (a == 1)
				l.amount();
			else
				cout << "";
			}
};

class page
{
private:
	int like;
	int follower;
	string page_name;
public:
	void name()
	{
		cout <<"Enter a name for page ";
		cin >> page_name;
		cout << page_name << "created ";
	}
	void page_info()
	{
		cout << "Enter 1 for like and 2 for post and 3 to unlike ";
		int like;
		string c ,s;
		int a;
		if(a ==1)
			like = like + 1;
		else if (a == 3)
			like = like -1;
		else if	(a == 2)
		{
			post p1;
			p1.new_post();
		}
	}
};

class group
{
	protected:
		string group_name;
		string array[10];
	public:
		void members()
		{
		cout << "Enter name of group ";
		cin >> group_name;
		cout << "Enter name for adding members "<<endl;
		for(int i = 0; i< 10 ; i++)
		{
			cin >> array[i];
			fstream file("group.txt",ios::app);
			file << array[i];
		}
		}

};

class games{
	public:
		void play_game()
		{
		cout << "1 :Angry Birds Star Wars" << endl;
		cout << "2 :Avengers Alliance" << endl;
		cout << "3 :Bubble Witch Saga" << endl;
		cout << "4 :Empires & Allies" << endl;
		int n;
		if (n ==1)
			cout << "Welcome to Angry Birds Star Wars";
		else if (n == 2)
			cout<< "Welcome to Avengers Alliance";
		else if(n == 3)
			cout <<"Welcome to Bubble Witch Saga";
		else
			cout <<"Welcome to Empires & Allies";
		}
};

class info
{
	private:
		string array[10];

	public:
		void add_friends()
			{
			fstream file("friend.txt",ios::app);
			for(int i = 0; i< 10 ; i++)
			{
				cout << "Enter name for adding friends "<<endl;
				cin >> array[i];
				file << array[i] << endl;
			}
			file.close();
		}
		void show_friends()
			{
			ifstream in;
			in.open("friend.txt");
			for(int i = 0; i< 10 ; i++)
			{
				in >> array[i];
			}
			in.close();
		}

		void followers()
		{
			string c;
			ifstream in;
			in.open("friend.txt");
		//	in.close();
			ofstream out;
			out.open("followers.txt");
			while (getline(in,c))
		{
				string a;
				cout << "Enter peoples to follow ";
		for(int i = 0; i< 10 ; i++)
			{
			string c;
			ifstream in;
			in.open("friend.txt");
			in.close();
				in >> a;
			}
		//		int i =0;
				out << a <<endl;
		//		i++;
				out.close();
		}
	}
	void group_details()
	{

	group go;
	games g1;
	cout << "Enter 1 if you want to know group information and 2 if you can to play any game";
	int u;
	cin >> u;
	if (u == 1)
		go.members();
	if (u == 2)
		g1.play_game();
	}
};

void send_request()
{
	string a;
	cout << "Enter a name for sending request ";
	cin >>a;
	cout <<"Friend request has been sended to "<< a;
}
class sign_in : public info
{
private:
	string id;
	string name;
	string pasward;
	string array[10];
public:
	void set()
	{
		cout << "Enter Details for your new account "<<endl;
		cout << "Enter your name ";
		cin >> name;
		cout << "Enter id ";
		cin >> id;
		cout << "Enter your pasward ";
		cin >> pasward;
		cout << "Welcome to mini facebook " << endl;
		ofstream out;
		out.open("login.txt");
		out << id << endl;
		out << name << endl;
		out << pasward << endl;
		out.close();
		ofstream out1;
		out1.open("login1.txt");
		out1 << id <<endl;
		out1 << pasward << endl;
		out1.close();
	}
	void add_friends()
		{
		ofstream out;
		out.open("friend.txt");
		for(int i = 0; i< 10 ; i++)
		{
			cout << "Enter name for adding friends "<<endl;
			cin >> array[i];
			out << array[i] << endl;
		}
		out.close();
	}
};

void login()
{
	string old_id;
	string old_pasward;
		string c ,d ;
		cout << "Enter id ";
		cin >> old_id;
		cout << "Enter your pasward ";
		cin >> old_pasward;
		ifstream in;
		in.open("login1.txt");
		in >> c >> d;
		if (c == old_id && d == old_pasward)
			cout << "Wlecome " <<" " << old_id << endl;
		else
			cout << "wrong id or wrong pasward " <<endl;

		in.close();
}

class block{
	private:
		bool flage;
	public:
		block()
		{
			flage = false;
		}
	void block_people()
		{
		string s ,name;
		fstream block ("block peoples.txt", ios::app);
		fstream friends ("friend.txt", ios :: in);
		cout << "Enter a name to block ";
		getline(cin , name);
		while(getline (friends , s))
		{
			if(s == name)
				flage =tream block ("block peoples.txt", ios::app);
		flage= true;
		}
		if (flage == true) {
			fstream temp ("friend.txt", ios :: in);
			while(getline(friends, s)) {
				temp << name << endl;
			}
			friends.close();

			ofstream freinds ("friend.txt");
			while(getline (temp, s)) {
				if (s != name) {
					freinds << s << endl;
				}
			}

			block << name << endl;
		}
		else {
			block << name << endl;
			}
		}
};

class unkown_peoples{
	public:
		void get()
		{
		string s ,name;
		cin >> name;
		fstream friends ("friend.txt", ios :: in);
		fstream out ("unkown.txt", ios :: app);
	while(getline (friends, s))
		{
		if(s != name)
			out << name;
		}
	}
};

class suggest{
	public:
		void suggest_friends()
		{
			string a,b,s;
			fstream friends ("friend.txt", ios :: in);
			cout <<"Enter name of friend you want to suggest ";
			cin >> a;
			while(getline(friends, s))
				{
					if (a == s)
					{
						cout << " Enter name to suggest "<<a;
						cin >> b;
						cout << "you have suggest " << b << " to " <<a;
					}
					else
						cout << a << " Not in friend list";
				}
		}
};

class un_friend{
	public:
		void unfriend()
		{
		string s ,a;
		ofstream out;
		out.open("Temp.txt");
		fstream in ("friend.txt", ios :: in);
		cin >> a;
			while(getline(in, s))
			{
				if (a == s)
					out << s;
				else
					cout <<"The name you enter is not a friend";
			}
			out.close();
			in.close();
			ofstream out1;
			out1.open("friend.txt");
			fstream in1 ("Temp.txt", ios :: in);
				while(getline(in1, s))
				{
					out << s;
					}
			cout << a <<" is revoved from friend list";
		}
};
int main()
{
	sign_in s;
	info i;
	int n;
	cout << "Want to make new account than press 1 or have existing account then enter 2"<<endl;
	cin >> n;
	if(n == 1)
	{
		s.set();
	}
	else if (n ==2)
	{
		login();
	}
	else
		cout << "Wrong number";

	i.add_friends();

	post p1;

	block b;

	like li;

	page pa;

	group ga;

	games g1;

	suggest s1;

	un_friend un1;

	s.show_friends();
	unkown_peoples un;

		cout << "1 : new_post"<<endl;
		cout << "2 : like " <<endl;
		cout << "3 : page " << endl;
		cout << "4 : group" << endl;
		cout << "5 : firend request"<<endl;
		cout << "6 : add firend "<<endl;
		cout << "7 : suggest" <<endl;
		cout << "8 : folloving peoples" <<endl;
		cout << "9 : show firend" << endl ;
		cout << "10 : unkown_peoples" << endl;
		cout << "11 : blocked place" << endl;
		cout << "12 : unfriend" << endl;

	int a;
	cin >>a;
	if (a == 1)
		p1.new_post();
	if (a ==2)
		li.amount();
	if (a == 3)
	{
		pa.name();
		pa.page_info();
		}
	if (a == 4)
		ga.members();
	if (a ==5 )
		send_request();
	if (a == 6)
		s.add_friends();
	if (a == 7)
		s1.suggest_friends();
	if (a == 8)
	{
		string c;
		ifstream in;
		in.open("followers.txt");
		in >> c;
		in.close();
		}
	if (a == 9)
		i.show_friends();
	if (a == 10)
		un.get();
	if (a == 11)
		b.block_people();
	if (a == 12)
		un1.unfriend();
}
