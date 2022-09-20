#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200010;

int n;
int a[N];

void solve(){
	cin >> n;
	for(int i = 0; i < n; i ++ ) cin >> a[i];
	
	int sum = 0;
	bool flag = false;
	for(int i = 0; i < n; i ++ ){
		if((flag && a[i]) || sum < 0){
			cout << "NO" << endl;
			return ;
		}
		sum += a[i];
		if(sum == 0) flag = true;
	}
	if(sum != 0) cout << "NO" << endl;
	else cout << "YES" << endl;
	
	return ;
}
signed main(){
	int t;
	cin >> t;
	while(t -- ) solve();
	
	return 0;
}