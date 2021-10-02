#include<bits/stdc++.h>
using namespace std;
vector<int> adj[20001];
bool visited[20001],col[20001];

bool dfs(int node,int c)
{
	visited[node]=1;
	col[node]=c;
	for(int child:adj[node])
	{
		if(visited[child]==0)
		{
			bool res=dfs(child,c^1);
			if(res==false)
				return false;
		}
		else if(col[node]==col[child])
		return false;
	}
	return true;
}
void initialise()
{
	for(int i=0;i<20001;i++)
	visited[i]=false;
}
int main()
{
	int t;
	cin>>t;
	for(int t1=0;t1<t;t1++)
	{
	
			int c=0,i,j,nodes,edges,x,y;
			cin>>nodes;
			cin>>edges;
			for(i=1;i<=nodes;i++)
			{
				adj[i].clear();
			}
			for(i=0;i<edges;i++)
			{
				cin>>x>>y;
				adj[x].push_back(y);
				adj[y].push_back(x);
			}
			initialise();   
			bool flag=true;
			for(i=1;i<=nodes;i++)
			{
				//cout<<"hi";
				if(visited[i]==false)
				{
					bool res=dfs(i,0);
					if(res==false)
						flag=false;
				}
			}
			cout<<"Scenario #"<<t1+1<<":"<<endl;
			if(flag==false)
			cout<<"Suspicious bugs found!";
			else
			cout<<"No suspicious bugs found!";

			cout<<endl;		
	}	
	
}
