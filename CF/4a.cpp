#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	int w;
	cin>>w;
	if(!(w&1)&&w!=2)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
