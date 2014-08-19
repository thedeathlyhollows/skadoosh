#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int x=0;
	int n;cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s[0]=='+'||s[2]=='+')
			x++;
		else if(s[0]=='-'||s[2]=='-')
			x--;
	}
	cout<<x<<endl;
	return 0;
}
