#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char s[7];
        cin>>s;
        int a[6];
        for (int i = 0; i <= 6; i++)
        {
            a[i] = s[i]-48;
        }
        int sum1 = a[0]+a[1]+a[2];
        int sum2 = a[3]+a[4]+a[5];
        sum1==sum2 ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    
    return 0;
}