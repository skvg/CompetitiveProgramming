#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        string s;
        cin>>s;
        int siz = s.size();
        for(int i=0;i<siz-1;i++){
            if(s[i]=='1'){
                if(s[i+1]=='0')
                s[i+1]='1';
                else
                s[i+1]='1';
            }
        }
        if(s[siz-1]=='1')
        cout<<"WIN\n";
        else
        cout<<"LOSE\n";
    }
    return 0;
}