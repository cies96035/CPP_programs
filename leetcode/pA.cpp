#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, a, b) for(int i = a; i < b; i++)

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1) << '\n';
    return 0;
}