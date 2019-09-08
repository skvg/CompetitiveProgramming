#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int l= n.length();
		cerr<<l;
		int sum = n[0]+n[l-1]-96;
		cout<<sum<<endl;
	}
	return 0;
}