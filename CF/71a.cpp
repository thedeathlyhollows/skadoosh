#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		if(n<=10)
			cout<<s<<endl;
		else
			cout<<s[0]<<(n-2)<<s[n-1]<<endl;
	}
	return 0;
}
