#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int X = 0;
	    int Y = 0;
	    for(int i=0; i<4*n-1; i++){
	        int x, y;
	        cin>>x>>y;
	        X = x^X;
	        Y = y^Y;
            cout<<X<<" "<<Y<<endl;
	    }
	    cout<<X<<" "<<Y<<"\n";
	}
	return 0;
}
