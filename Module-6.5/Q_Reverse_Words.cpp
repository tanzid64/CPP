#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word, t;
    while (ss >> word) {
        reverse(word.begin(), word.end());
        t += word + " ";
    }
    t.pop_back();
    cout << t;
    return 0;
}