#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a[n];
    int len = 1;

    for(int i=0; i < n;i++)
        a[i] = 0;

    for(int i = s.size()-1; i >= 0; i--)
    {
        if(s[i] == '<')
            a[i+1] = len++;
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
            a[i] = len++;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
