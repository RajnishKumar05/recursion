#include<bits/stdc++.h>
using namespace std;


int solve(int index, int sum, vector<int>& coins)
{
    if(sum == 0)return 1;

    if(sum < 0 || index == coins.size())return 0;

    int take = solve(index, sum - coins[index], coins);

    int skip = solve(index+1, sum, coins);

    return take + skip;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> coins(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> coins[i];
    }

    cout << solve(0, k, coins);
}