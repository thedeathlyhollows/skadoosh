#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<string>

using namespace std;
int main()
{
	string s;
	int n;
	cin>>n;
	cin>>s;
	int count=0;
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
			count++;
	}
	cout<<count<<endl;
	return 0;
}
