#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {

        int n;
        cin >> n;
        string rans;
        string wans;
        cin >> rans;
        cin >> wans;
        bool chek=true;
        int score = 0;

        for (int i = 0; i < n; i++)
        {
            if(chek==false)
            chek=true;
            else
            {
                if(wans[i]==rans[i])
                score += 1;
                else if(wans[i]=='N')
                chek=true;
                else
                chek=false;
            }
        }
        cout<<score<<"\n";
    }
    return 0;
}