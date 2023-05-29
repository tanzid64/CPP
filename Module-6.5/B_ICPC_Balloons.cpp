#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n, cnt[26] = {0},sum = 0;
        cin>>n;
        while (n--)
        {
            char ch;
            scanf(" %c", &ch);
            cnt[ch - 'A']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if(cnt[i]>0) sum = sum+cnt[i]+1;
        }
        cout<<sum<<endl; 
    }
    return 0;
}