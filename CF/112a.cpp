#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void tolower(string &s)
{
	for(int i=0;i<s.length();i++)
		s[i]=(s[i]>='A'&&s[i]<='Z')?s[i]+32:s[i];
}

int compare(string s1,string s2)
{
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]<s2[i])
			return -1;
		else if(s1[i]>s2[i])
			return 1;
	}
	return 0;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	tolower(s1);
	tolower(s2);
	int ans=compare(s1,s2);
	cout<<ans<<endl;
	return 0;
}

