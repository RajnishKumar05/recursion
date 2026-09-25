#include <bits/stdc++.h>
using namespace std;

long long cnt = 0;

void solve(int i, int j,
           vector<vector<char>>& v,
           vector<vector<bool>>& visited)
{
    // Out of bounds
    if(i < 0 || i >= v.size() ||
       j < 0 || j >= v[0].size())
        return;

    // Already visited
    if(visited[i][j])
        return;

    // Wall
    if(v[i][j] == '#')
        return;

    visited[i][j] = true;

    cnt++;

    solve(i + 1, j, v, visited);
    solve(i, j + 1, v, visited);
    solve(i - 1, j, v, visited);
    solve(i, j - 1, v, visited);
}

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> v(n, vector<char>(n));

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> v[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(n, false));

    solve(0, 0, v, visited);

    cout << cnt;
}