#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; //so hs
    long long S;

    cin >> n;
    cin >> S;
    

    vector<long long> pref(n);
    long long counter = 0;
    for (int i = 0; i<n;i++) {
        long long a_i;
        cin >> pref[i];
    }

    for (int i = 0; i<n;i++) {
        for (int k = i +1; k<n;k++) {
            long long value = pref[i] + pref[k] ;
            if (value ==S) {counter ++;}
            }
        }
    cout << counter;
    return 0;
                
}