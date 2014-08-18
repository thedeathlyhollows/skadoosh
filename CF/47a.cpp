#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int ans=m*(n/2)+(n%2)*(m/2);
	cout<<ans<<endl;
	return 0;
}
