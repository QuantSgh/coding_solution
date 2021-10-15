#include<bits/stdc++.h>
using namespace std;

int main()
{
   long n,m;
   cin>>n>>m;

   long c[m+1];
   c[0]=0;
   for(int r=1;r<=m;r++)
   {
       cin>>c[r];
   }
   long arr[m+1][n+1];
   for(int y=0;y<=n;y++)
   {
       arr[0][y]=0;
   }
   for(int x=0;x<=m;x++)
   {
       arr[x][0]=1;
   }
   for(int i=1;i<=m;i++)
   {
       for(int j=1;j<=n;j++)
       {
           if(c[i]>j)
           {
               arr[i][j]=arr[i-1][j];
           }
           else
           arr[i][j]=arr[i-1][j]+arr[i][j-c[i]];
       }
   }
for(int a=0;a<=m;a++ )
{
	for(int b=0;b<=n;b++)
	{
		cout<<arr[a][b]<<" ";
	}
	cout<<endl;
}
   
   cout<<arr[m][n];
   
    return 0;
}

