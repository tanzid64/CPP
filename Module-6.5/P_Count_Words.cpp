#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int counter = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (!(isalpha(s[i])) && isalpha(s[i+1]))
        {
            counter++;
        }
    }
    cout<<counter; 
    return 0;
}