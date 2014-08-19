#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	string exp;
	cin>>exp;
	int n=exp.length();
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int j,number=0;
		for(j=i;j<n&&exp[j]!='+';j++)
		{
			number=number*10+(exp[j]-'0');
		}
		i=j;
		v.push_back(number);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
		if(i!=v.size()-1)
			cout<<"+";
	}
	cout<<endl;
	return 0;
}
