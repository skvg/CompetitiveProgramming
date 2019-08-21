#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(auto &it:a)
           cin>>it;
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int res=a[i]*a[j];
                int flag=0;
                while(res!=0)
                {
                    flag+=res%10;
                    res/=10;
                }
                ans=max(flag,ans);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}