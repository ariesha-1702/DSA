#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define CASE ll int t; cin>>t; while(t--)

void solve() {
    string s; cin >> s;
    ll int n = s.size();

    ll int answer = 0;
    ll int l = 0, r = 0;

    ll int _0 = 0, _1 = 0;
    ll int one = 0, zero = 0;

    while (r < n) {
        if (s[r] != '?') {
            ll int e = (s[r] == '0' ? 0 : 1);
            ll int parity = ( (r & 1) ? 1 : -1);
            while (
                l < r &&
                (
                    (e == 0 && _0 != parity && _0 != 0) ||
                    (e == 0 && _1 == parity && _1 != 0) ||
                    (e == 1 && _1 != parity && _1 != 0) ||
                    (e == 1 && _0 == parity && _0 != 0)
                )
            ) {
                if (s[l] != '?') {
                    ll int e2 = (s[l] == '0' ? 0 : 1);
                    if (e2 == 0) zero--;
                    else one--;

                    if (one == 0) _1 = 0;
                    if (zero == 0) _0 = 0;
                }
                l++;
            }

            if (e) _1 = parity, one++;
            else _0 = parity, zero++;
        }

        ll int len = r - l + 1;
        answer += len;
        r++;
    }

    cout << answer << endl;
}

int main() {
    sync
    CASE{
        solve();
    }
    return 0;
}