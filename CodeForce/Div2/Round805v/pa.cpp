#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pll = pair<ll, ll>;
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define rvep(i, a, b) for(int i = a; i >= b; i--)

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int t;
    int arr[2][2];
    cin >> t;
    while(t--){
        int s = 0;
        rep(i, 0, 2){
            rep(j, 0, 2){
                cin >> arr[i][j];
                s += arr[i][j];
            }
        }
        if(s == 4){
            cout << "2\n";
        }else if(s == 0){
            cout << "0\n";
        }else{
            cout << "1\n";
        }
    }
    return 0;
}