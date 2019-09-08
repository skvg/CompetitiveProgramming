// https://codeforces.com/contest/1208/problem/A
#include<bits/stdc++.h>
#define lli long long int
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
		lli a,b,n;
		cin>>a>>b>>n;
		int key = n%3;
		if(key == 0)
			cout<<a<<endl;
		else if(key == 1)
			cout<<b<<endl;
		else{
			lli c = a^b;
			cout<<c<<endl;
		}
		
	}
	return 0;
}
