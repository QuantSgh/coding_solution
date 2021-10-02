#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int m,int n)
{
	int i,j,l[m+1][n+1];
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				l[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				l[i][j]=l[i-1][j-1]+1;
			}
			else
			{
					l[i][j]=max(l[i-1][j],l[i][j-1]);
			}
		}
	}
	return l[m][n];
	
	
	
	
	
	
	
	
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1;
		cin>>s2;
		int len;
		len=lcs(s1,s2,s1.length(),s2.length());
		cout<<"Max longest common subsequence= "<<len;
		cout<<endl;
	}
	return 0;
}
