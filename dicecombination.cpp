#include<bits/stdc++.h>
using namespace std;


int solve(int n)
{
    if(n == 0)return 1;
    if(n < 0)return 0;
    int count = 0;
    for(int i = 1; i <=6; ++i)
    {
       count += solve(n - i);
    }

     return count;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n);

}