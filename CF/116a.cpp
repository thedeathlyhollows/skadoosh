#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int count=0,maxC=-1;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		count=count-a+b;
		maxC=max(maxC,count);
	}
	cout<<maxC<<endl;
	return 0;
}
