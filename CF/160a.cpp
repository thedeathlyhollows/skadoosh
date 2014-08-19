#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	int ans=0;
	int lsum[n+2],rsum[n+2];
	lsum[0]=0;rsum[n+1]=0;
	for(int i=1;i<=n;i++)	lsum[i]=lsum[i-1]+a[i];
	for(int i=n;i>=0;i--)	rsum[i]=rsum[i+1]+a[i];
	for(int i=n;i>=0;i--)	if(rsum[i]>lsum[i-1]){	ans=n-i+1;break;}
	cout<<ans<<endl;
	return 0;
}
