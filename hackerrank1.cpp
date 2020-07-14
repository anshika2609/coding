#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    sort(a.begin(), a.end(), [](const string &left, const string &right)
    {
        if (left.size() != right.size()) {
            return left.size() < right.size();
        } else {
            return left < right;
        }
    });
    for (const string &s : a) {
        cout << s << '\n';
    }
    return 0;
}
//https://www.hackerrank.com/challenges/big-sorting/problem///