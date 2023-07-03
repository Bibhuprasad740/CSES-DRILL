#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll prev;
    ll ans = 0;

    for (ll i = 0; i < n; i++)
    {
        ll inp;
        cin >> inp;
        if (i == 0)
            prev = inp;
        else
        {
            if (inp < prev)
            {
                ans += (prev - inp);
            }
            else
            {
                prev = inp;
            }
        }
    }

    cout << ans;

    return 0;
}
