#include<bits/stdc++.h>
using namespace std;

int INF = 1e9;
int solve(int s, vector<int> &v)
{
    

    if(s == 0)return 0;
    if(s < 0)return INF;
    int ans = INF;

   for(int i = 0; i < v.size(); ++i)
   {
    ans = min(ans, 1+solve(s - v[i], v));

   }
   return ans;
}

int main()
{
    int n, s;
    cin >> n >> s;

    vector<int> v(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    cout << solve(s, v);


}