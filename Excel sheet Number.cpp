#include<bits/stdc++.h>
using namespace std;

long long int titleToNumber(string s) 
{
      long long int sum=0;
        int x=s.length()-1;
        
        for(int i=0;i<s.length();i++)
        {
            sum=sum+(s[i]-64)*pow(26,x);
            x--;
        }
        
        return sum;
}
int main()
{
	string s;
	cout<<"Enter string in capital:\n";
	cin>>s;
	
	cout<<"\ncaresponding excel sheet Number:"<<titleToNumber(s);
    
}
