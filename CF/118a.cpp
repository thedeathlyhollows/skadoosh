#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
bool checkyes(char s)
{
	s=tolower(s);
	switch(s)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
			return false;
	}
	return true;
}
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(checkyes(s[i]))
			cout<<"."<<char(tolower(s[i]));
	cout<<endl;
	return 0;
}
