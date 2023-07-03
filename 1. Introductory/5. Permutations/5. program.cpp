
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q;
    vector<int> ans;

    for (int i = 1; i < n + 1; i++)
    {
        if (i & 1)
        {
            q.push(i);
        }
        else
        {
            ans.push_back(i);
        }
    }
    while (!q.empty())
    {
        int front = q.front();
        int size = ans.size();
        if (size == 0 or abs(front - ans[size - 1]) > 1)
        {
            ans.push_back(front);
            q.pop();
        }
        else
        {
            cout << "NO SOLUTION";
            return 0;
        }
    }

    for (auto x : ans)
        cout << x << " ";

    return 0;
}
