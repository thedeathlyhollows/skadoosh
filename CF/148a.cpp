#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)	return a;
	else if(a>b)	return gcd(b,a%b);
	else		return gcd(a,b%a);
}
int lcm(int a,int b)
{
	return (a*b)/__gcd(a,b);
}


int main()
{
	int k,m,l,n,d;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	int ans=(d/k)+(d/l)+(d/m)+(d/n);
	int ans2=((d/lcm(k,l))+(d/lcm(k,m))+(d/lcm(k,n))+(d/lcm(l,m))+(d/lcm(l,n))+(d/lcm(m,n)));
	int ans3=((d/lcm(lcm(k,l),m))+(d/lcm(lcm(k,l),n))+(d/lcm(lcm(k,m),n)))+(d/lcm(lcm(l,m),n));
	int ans4=d/lcm(lcm(k,l),lcm(m,n));
	ans=ans-ans2+ans3-ans4;
	printf("%d\n",ans);

	return 0;
}
