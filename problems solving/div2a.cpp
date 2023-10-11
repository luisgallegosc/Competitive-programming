#include<iostream>
#include<vector>
#include<set>
#define forn(i, n) for(int i = 0; i < (n); ++i)
#define pb push_back
#define sz(x) (int)(x).size()
using namespace std;
typedef vector<int> vi;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        set<int> s;
        vi ans;
        
        for (int i = 1; i <= k; i++) {
            if (i != x)
                s.insert(i);
        }
        
        int cnt = 0;
        if (x == 1) {
            for (auto u : s) {
                if (s.find(n % u) != s.end()) {
                    for (int j = 0; j < (n) / u; j++) {
                        ans.pb(u);
                    }
                    ans.pb(n % u);
                    break;
                }
                if (n % u == 0) {
                    for (int j = 0; j < n / u; j++) {
                        ans.pb(u);
                    }
                    break;
                }
            }
    
            if (sz(ans) == 0) {
                cout << "NO";
            } else {
                cout << "YES\n";
                cout << sz(ans) << "\n";
                for (auto u : ans)
                    cout << u << " ";
            }
            
        } else {
            cout << "YES\n";
            cout << n << "\n";
            forn(i, n)
                cout << 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}
