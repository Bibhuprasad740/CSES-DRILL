#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;
    for (int i = 1; i < n + 1; i++)
    {
        x ^= i;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int inp;
        cin >> inp;
        x ^= inp;
    }

    cout << x;
    return 0;
}
