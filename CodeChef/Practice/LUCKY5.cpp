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
		int l = n.length();
		int sum = 0;
		while(l--){
			int a = n[l]-48;
			if(a != 4 && a != 7)
				sum+=1;
		}
		cout<<sum<<endl;
	}
	return 0;
}
