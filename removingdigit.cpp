#include<bits/stdc++.h>
using namespace std;
int maxunitdigit(int n)
{
    if(n == 0)return 0;

    return max(n%10, maxunitdigit(n/10));
}


int solve(int n)
{
    if(n == 0)return 0;
    return 1 + solve(n - maxunitdigit(n));
}


int main()
{
    int n;
    cin >> n;
    cout << solve(n);
}