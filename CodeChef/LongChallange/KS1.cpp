#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++)
        cin>>a[i];
        
        int count =0;
        for(int i=0;i<n-1;i++){
            int sm=0;
            for(int j=i+1;j<n;j++){
                sm = sm ^ a[j-1];
                int smm =0;
                for(int k=j;k<n;k++){
                    smm = smm ^ a[k];
                    if(sm == smm)
                    count+=1;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
} 