#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int findtype(string s)
{
	int n=s.length();
	if(s[0]=='R'){
		int i;
		for(i=1;s[i]>='0'&&s[i]<='9';i++);
		if(i!=1&&s[i]=='C')
			return 1;
	}
	return 2;
}
void conToOne(string s)
{
	int r=0,ans=0;
	int i,n=s.length();
	for(i=0;s[i]>='A'&&s[i]<='Z';i++)
	{
		ans=(ans*26)+(s[i]-'A')+1;
	}
	for(;i<n;i++)
		r=(r*10)+(s[i]-'0');
	cout<<"R"<<r<<"C"<<ans<<endl;
}
void conToTwo(string s)
{
	int n=s.length();
	int i,r=0;
	for(i=1;s[i]!='C';i++)
		r=r*10+(s[i]-'0');
	i++;
	int c=0;
	for(;i<n;i++) 
		c=c*10+(s[i]-'0');
	string ans="";
	c--;
	while(c>0)
	{
		ans+=(c%26)+65;
		c/=26;
		c--;
	}
	if(c==0)
		ans+='A';
	reverse(ans.begin(),ans.end());
	cout<<ans<<r<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k=findtype(s);
		if(k==1)
			conToTwo(s);
		else
			conToOne(s);
	}
	return 0;
}

