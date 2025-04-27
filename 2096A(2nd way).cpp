#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v;
    int small = 1, big = n;

    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == '<')
            v.push_back(small++);
        else
            v.push_back(big--);
    }

    v.push_back(small); // add the last element

    reverse(v.begin(), v.end());

    for (auto i : v)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

