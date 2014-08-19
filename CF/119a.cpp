#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
using namespace std;

int gcd(int a,int b)
{
//	cout<<a<<" "<<b<<endl;
	return (b==0)?a:gcd(b,a%b);
}

int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	int arr[2];
	arr[0]=a;arr[1]=b;
	int ans,turn=0;
	do
	{
		ans=gcd(max(arr[turn],n),min(arr[turn],n));
//		cout<<"n= "<<n<<" gcd= "<<ans<<" rem= "<<(n-ans)<<" turn= "<<turn<<endl;
		n=n-ans;
		turn=!turn;
	}while(n>=ans);

	cout<<!turn<<endl;
}
