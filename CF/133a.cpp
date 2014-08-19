#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
	char s[1010];
	scanf("%s",s);
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;	
}
