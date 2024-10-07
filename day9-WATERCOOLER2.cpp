#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if (x<y){
	        (y%x==0)?cout<<(y/x)-1<<endl:cout<<y/x<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	    
	}

}