// https://codeforces.com/contest/1204/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	
	int n,l,r;
	cin>>n>>l>>r;
	int min=1;
	int max=1;
	int pro=1;
	for(int i=0;i<r-1;i++){
		pro*=2;
		max+=pro;
	}
	for(int i=0;i<n-r;i++)
		max+=pro;
	pro =1;
	for(int i=0;i<l-1;i++){
		pro*=2;
		min+=pro;
	}
	for(int i=0;i<n-l;i++)
		min+=1;
	cout<<min<<" "<<max<<endl;
	return 0;
}
