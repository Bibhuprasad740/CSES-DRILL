#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> solve(ll n)
{
    vector<ll> ans;
    while (n != 1)
    {
        ans.push_back(n);
        if (n & 1)
            n = n * 3 + 1;
        else
            n /= 2;
    }
    ans.push_back(1);
    return ans;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> ans = solve(n);

    for (auto it : ans)
        cout << it << " ";

    return 0;
}
