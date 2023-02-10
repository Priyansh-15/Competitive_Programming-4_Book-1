Link : https://vjudge.net/solution/40988808/ZY9Qo2DhmaJahZH3B278

#include<bits/stdc++.h>
using namespace std;

int N=1;
	
int sol()
{
	stack<string>s;
	stack<string>t;
	for(int i=0;i<27;i++)
	{
		string temp;
		cin>>temp;
		s.push(temp);
	}
	for(int i=0;i<25;i++)
	{
		string temp;
		cin>>temp;
		t.push(temp);
	}
	int y=0;
	for(int i=0;i<3;i++)
	{
		string temp=s.top();
		s.pop();
		int val=temp[0]-'0';
		if(!(val>=2 and val<=9))
			val=10;
		y+=val;
		val=10-val;
		while(val--)
			s.pop();
	}
	string ans;
	if(y<=s.size())
	{
		int x=s.size()-y;
		while(x--)
		{
			s.pop();
		}
		ans=s.top();
	}
	else
	{
		y-=s.size();
		int x=t.size()-y;
		while(x--)
		{
			t.pop();
		}
		ans=t.top();
	}
	cout<<"Case "<<N<<": "<<ans<<endl;
	N++;
	return 0;
}
	
int main()
{
	int t;
	cin>>t;
	while(t--)
		sol();
	return 0;
}
