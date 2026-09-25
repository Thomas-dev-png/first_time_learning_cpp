#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; // 5 1≤ n ≤1e6    --  1 -2 6 -4 5 (a) −1e9≤ai≤1e9    m<1e6
    
    vector<long long> pref(n+1,0); //6 ptu, pref[0] =0;

    for (int i =1;i<=n;i++){
        long long a_i;
        cin >> a_i;
        pref[i] = pref[i-1] + a_i;
    }

    //li - > ri
    //so hs 
    int m;
    cin >> m;

    long long highest_mark = -4e18;
    int pos = 0;

    for (int i = 1; i<=m;i++){
        int l_i,r_i;
        long long h;
        cin >> l_i >> r_i;

        //pref formula
        h = pref[r_i] - pref[l_i -1];    
        if (h >= highest_mark) { 
            highest_mark = h;
            pos=i;
        } ;
    }
    cout << pos;
    // TODO: đọc dữ liệu và giải

    return 0;
}
