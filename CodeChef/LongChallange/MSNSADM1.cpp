#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        int goal[n];
        int foul[n];
        for(int i=0;i<n;i++){
            cin>>goal[i];
        }
        for(int i=0;i<n;i++){
            cin>>foul[i];
        }
        int points[n];
        int flag=0;
        for(int i=0;i<n;i++){
            points[i]= 20*goal[i] - 10*foul[i];
            flag= max(points[i],flag);
        }
        flag = max(0,flag);
        cout<<flag<<"\n";
    }
    return 0;
}