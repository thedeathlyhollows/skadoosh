#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[5]={0};
	for(int i=0;i<n;i++)
	{
		int dummy;
		cin>>dummy;
		a[dummy]++;
	}
	int ans=a[4];
	if(a[1]<=a[3])
	{
		ans+=a[1];
		a[3]-=a[1];
		ans+=a[3];
		a[1]=0;
	}
	else
	{
		ans+=a[3];
		a[1]-=a[3];
		int k=a[1]%4;
		ans+=(a[1]/4);
		a[1]=k;
	}
//	cout<<ans<<endl;
	int k=a[2]%2;
	ans+=a[2]/2;
	ans=(2*k+a[1]<=4&&2*k+a[1]>0)?ans+1:(2*k+a[1]>0)?ans+2:ans;
	cout<<ans<<endl;
	return 0;
}
