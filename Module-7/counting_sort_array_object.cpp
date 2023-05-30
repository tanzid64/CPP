#include<bits/stdc++.h>
using namespace std;
class CustomSort
{
    public:
        char c;
        int cnt;
};
bool cmp(CustomSort a,CustomSort b)
{
    if(a.cnt > b.cnt) return true;
    else return false;
}
int main()
{
    int n; cin>>n;
    CustomSort frq[26];
    for (int i = 0; i < 26; i++)
    {
        frq[i].c = (i+97);
        frq[i].cnt = 0;
    }
    //Char Input
    for (int i = 0; i < n; i++)
    {
        char c; cin>>c;
        frq[c-'a'].cnt++;
    }
    //Sorting
    sort(frq,frq+26,cmp);
    //Printing
    for (int i = 0; i < 26; i++)
    {
        while (frq[i].cnt!=0)
        {
            cout<<frq[i].c;
            frq[i].cnt--;
        }
    }
    
    return 0;
}