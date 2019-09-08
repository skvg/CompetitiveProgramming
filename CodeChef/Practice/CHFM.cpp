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
		int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		long long int sm=0;

		for(int i=0;i<n;i++){
			sm+=arr[i];
		}
		long long int key;
		key = sm%n;
		if(key == 0){
			int long long mean = sm/n;

			for(int i=0;i<n;i++){
				if(arr[i] == mean){
					cout<<i+1<<endl;
					break;
				}
				else if(i == n-1){
					cout<<"Impossible"<<endl;
					break;
				}

			}
		}
		else{
			cout<<"Impossible"<<endl;
		}
	}
	return 0;
}