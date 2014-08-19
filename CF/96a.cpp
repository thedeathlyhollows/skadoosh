#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>

using namespace std;
int main()
{
	char s[110];
	scanf("%s",s);
	int count=1;
	for(int i=1;i<strlen(s);i++)
	{
		if(s[i]==s[i-1])
			count++;
		else
		{
			count=1;
		}
		if(count==7)
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
