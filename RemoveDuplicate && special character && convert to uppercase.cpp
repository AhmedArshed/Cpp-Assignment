#include<iostream>
using namespace std;
//special character
string var1(string sqt)
{
	string temp="";
	for(int i=0;i<sqt.size();i++)
	{
		if(sqt[i]<=122&&sqt[i]>=96||sqt[i]<=91&&sqt[i]>=65)
		{
			temp+=sqt[i];
		}
	}
	cout<<temp;
}
//remove duplicate

string var2(string sqt)
{
	bool same=false;
	string duplicateword="";
	duplicateword+=sqt[0];
	int i,j;
	for( i=1;i<sqt.size();i++)
	{
		for( j=0;j<duplicateword.size();j++)
		{
			same=false;
			if(duplicateword[j]==sqt[i])
			{
				same=true;
			}
		}
		if(same==false)
		{
			duplicateword+=sqt[i];
		}
	}
		cout<< duplicateword;
}

//uppercase
string var3(string sqt)
{
	for(int i=0;i<sqt.size();i++)
	{
		if(sqt[i]>=96)
		{
			sqt[i]-=32;
		}
	}
	cout<< sqt;
}
string var4(string sqt)
{
	string mes;
	cout<<"Plz enter a string ";
	cin>>mes;
	int x = 0;
	for(x =0;x <mes.size();x++)
	{
		if(mes[x] ==mes[x+1])
			cout<<mes[x]<<"x";
	
	else
	{
		cout<<mes[x]<<mes[x+1];
		x++;
		}
	}
	if(x % 2!=0)
	{
		cout<<"x";
	}

}

int main()
{
	string sqt=var1("ttaa43l");
	cout<<sqt<<endl;
	char table[5][5];
}

