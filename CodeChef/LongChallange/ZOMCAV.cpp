#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        
        int c[n];
        int h[n];
        int sm=0;
        int smm=0;

        for(int i=0;i<n;i++)
        cin>>c[i];

        for(int i=0;i<n;i++)
        cin>>h[i];
        
        int maxx,minn;
        for(int i=0;i<n;i++){
            maxx = min((n-1),i+c[i]);
            minn = max(0,i-c[i]);
            sm+=maxx-minn+1;
        }

        for(int i=0;i<n;i++)
        smm += h[i];

        if (sm ==smm)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}