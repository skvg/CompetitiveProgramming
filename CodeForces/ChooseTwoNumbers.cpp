// https://codeforces.com/contest/1206/problem/A 
#include<bits/stdc++.h>
using namespace std;
void func(int x, int y){
	cout<<x<<" "<<y;
}
int main(){
 
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
 
	int n; cin>>n;
	int arr[n];
	for(auto &i: arr)
		cin>>i;
 
	int m; cin>>m;
	int brr[m];
	for(auto &i: brr)
		cin>>i;
	int summ;
	int sk = 0;
	int flag =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sk=0;
			summ = arr[i]+brr[j];
			for(int k=0;k<n;k++){
				if (summ == arr[k])
					sk++;
				if (sk == 1) break;
			}
 
			for (int k=0;k<m;k++){
				if( summ == brr[k])
					sk++;
				if ( sk >= 1) break;
				if ( k == m-1){
					func(arr[i],brr[j]);
					return 0;
				}
			}
		}
	}
	return 0;
}