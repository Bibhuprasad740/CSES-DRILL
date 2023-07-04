
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    vector<pair<ll, ll>> queries;
    for (int i = 0; i < t; i++)
    {
        ll row, col;
        cin >> row >> col;
        queries.push_back({row, col});
    }

    vector<ll> ans;
    int size = queries.size();

    for (int index = 0; index < size; index++)
    {
        pair<ll, ll> query = queries[index];

        ll row = query.first;
        ll col = query.second;

        ll n = max(row, col);
        ll cornerVal = n * (n - 1) + 1;

        if (row == col)
        {
            goto end;
        }

        if (row < n)
        {
            ll factor = n - row;
            if (n % 2 == 0)
                cornerVal -= factor;
            else
                cornerVal += factor;
        }
        else
        {
            ll factor = n - col;
            if (n % 2 == 0)
                cornerVal += factor;
            else
                cornerVal -= factor;
        }
    end:
        ans.push_back(cornerVal);
    }

    for (auto it : ans)
        cout << it << "\n";

    return 0;
}
