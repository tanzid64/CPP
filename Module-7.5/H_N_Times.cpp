#include<bits/stdc++.h>
using namespace std;
void times(int t)
{
    for (int j = 0; j < t; j++)
    {
        int n;
        char c; cin>>n>>c;
        for (int i = 1; i <= n; i++)
        {
            if(i==n) cout<<c<<endl;
            else cout<<c<<" ";
        }
    }
}
int main()
{
    int t; cin>>t;
    times(t);
    return 0;
}