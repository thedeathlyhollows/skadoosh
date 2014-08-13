#include <iostream>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	unsigned long long int a[180][2];
	a[0][0]=a[0][1]=0;
	a[1][0]=k-1;a[1][1]=0;
	for(int i=2;i<=n;i++)
	{
		a[i][0]=(a[i-1][0]+a[i-1][1])*(k-1);
		a[i][1]=a[i-1][0];
	}
	cout<<(a[n][0]+a[n][1]);
	return 0;
}
