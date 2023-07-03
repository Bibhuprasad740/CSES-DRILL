#include <bits/stdc++.h>
using namespace std;

int solve(string str)
{
    int maxi = INT_MIN, curr_count = 1;
    char start_char = str[0];
    for (int i = 1; i < str.size(); i++)
    {
        if (start_char == str[i])
        {
            curr_count++;
        }
        else
        {
            maxi = max(maxi, curr_count);
            curr_count = 1;
            start_char = str[i];
        }
    }
    maxi = max(maxi, curr_count);
    return maxi;
}

int main()
{
    string str;
    cin >> str;

    int ans = solve(str);
    cout << ans;

    return 0;
}
