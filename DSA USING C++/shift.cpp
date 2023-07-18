#include<bits/stdc++.h>
using namespace std;

#define int long long 



void solve(){
    int n,q; cin >> n >> q;
    int arr[n];
    for( int i = 0; i<n; i++ ) cin >> arr[i];

    int cnt[n+1][60];
    for( int i = 0; i<60; i++ ) cnt[0][i] = 0;


    for( int i = 0; i<n; i++ ){
        for( int j = 0; j<60; j++ ){
            if( arr[i] & ( 1ll << j ) ) cnt[i+1][j] = 1;
            else cnt[i+1][j] = 0;
        }
    }

    for( int i = 1; i<=n; i++ ){
        for( int j = 0; j<60; j++ ){
            cnt[i][j] += cnt[i-1][j];
        }
    }


    int ans = 0;

    while( q-- ){
        int k, a,b, c, d; cin >> k >> a >> b >> c >> d;
        int firstset = cnt[b][k] - cnt[a-1][k];
        int secondset = cnt[d][k] - cnt[c-1][k];
        int nosetfirst = ( b - a + 1 ) - firstset;
        int nosetsecond = ( d - c + 1 ) - secondset;

        ans = firstset * nosetsecond + secondset * nosetfirst;
        cout << ans << endl;
    }

}

signed main(){
    debugMode();
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while( t-- ){
        solve();
    }
    return 0;
}