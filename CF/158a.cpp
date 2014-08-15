#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[100];
	int ans;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(a[k-1]>0)
	{
		ans=k-1;
		for(int i=k;i<n&&a[i]==a[k-1];i++)ans=i;
		cout<<ans+1<<endl;
	}
	else
	{
		ans=0;
		for(int i=k-1;i>=0&&a[i]==a[k-1];i--)ans=i;
		cout<<ans<<endl;
	}
			
	return 0;
}
