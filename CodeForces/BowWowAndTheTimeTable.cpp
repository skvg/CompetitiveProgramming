// https://codeforces.com/contest/1204/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
	
	string s;
	cin>>s;
	int l = s.size();
	int key=0, onesum=0;
	for(int i=l-1;i>=0;i--){
		if(s[i] == '1'){
			key = l-i;
			onesum+=1;
		}

	}
	int k=0;
	if(key%2 == 0 || onesum == 1)
		k= key/2;
	else
		k= (key/2)+1;
	cout<<k<<endl;
	return 0;
}
