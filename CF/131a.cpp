#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s;
	cin>>s;
	bool flag=true;
	int start=0;
	if(s[0]>='a'&&s[0]<='z')
		start=1;
	for(int i=start;i<s.length();i++)
	{
		if(!(s[i]>='A'&&s[i]<='Z'))
			flag=false;
	}
	if(flag)
	{
		if(s[0]>='a'&&s[0]<='z')
			s[0]=s[0]-32;
		else
			s[0]=s[0]+32;
		for(int i=1;i<s.length();i++)	
			s[i]=s[i]+32;
	}
	cout<<s<<endl;
	return 0;
}
