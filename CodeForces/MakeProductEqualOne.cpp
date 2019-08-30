// https://codeforces.com/contest/1206/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	
	int n; cin>>n;
	long long int arr[n];
	long long int sum=0;
	int flagz=0;
	int flagn=0;

	for(int i=0;i<n;i++){
		cin>>arr[i]; 
	}

	for(int i=0;i<n;i++){
		if(arr[i]>0){
			sum+= arr[i]-1;
		} 
		else if(arr[i]<0){
			sum+= (-1)-(arr[i]);
			flagn+=1;
		} 
		else flagz+=1;
	}

	int key = flagn%2;
	if(key && flagz == 0) sum+=2;
	sum+=flagz;
	cout<<sum; 
	return 0;
}
