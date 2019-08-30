// https://codeforces.com/contest/1206/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	
	int n; cin>>n;
	if(n%2 == 1)
		cout<<"YES"<<endl;
	else{
		cout<<"NO";
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(i%2 == 1)
			cout<<i<<" ";
		else{
			int a = 2*n+2-i;
			cout<<a<<" ";
		}
	}
	for(int i=1;i<=n;i++){
		if(i%2 == 1){
			cout<<i+1<<" ";
		}
		else{
			int a = 2*n+1-i;
			cout<<a<<" ";
		}
	}
	return 0;
}
