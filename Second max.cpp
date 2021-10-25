//c++ program to fing the second maximum of three numbers 
#include <iostream>
using namespace std;

int main() {
	int t ;
	cin>>t;
	int a ,b, c;
	while(t--){
	    cin>>a>>b>>c;
	    if(a<b&&a>c || a<c&&a>b){
	        cout<<a<<endl;
	    }
	    else if(b<a&&b>c||b>a&&b<c){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<c<<endl;
	    }
	}
	return 0;
}
