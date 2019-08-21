#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        string s;
        string r;
        cin>>s;
        cin>>r;
        int sums=0;
        int sumr=0;
        for(int i=0;i<n;i++){
            sums+=s[i];
            sumr+=r[i];
        }
        if(sums==sumr)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}