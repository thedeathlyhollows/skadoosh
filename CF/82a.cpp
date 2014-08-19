#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
int main()
{
	int n;
	string s[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	scanf("%d",&n);
	long long int i=5;
	int count=5,ans=1,itr=0;
	while((n-count)>0)
	{
		i=i*2;
		ans=count;
		count+=i;itr++;
//		cout<<n<<" "<<count<<endl;
	}
	i/=2;
//	cout<<n-ans<<" "<<(n-ans)/(i<<itr)<<endl;
	int val=(n-ans)/(1<<itr);
	printf("%s\n",s[val].c_str());
	return 0;
}
