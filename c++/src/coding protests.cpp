#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string
    int n; //so ngay

    cin >> n;

    int counter =0;
    long long temp_a = -1;
    int max_counter = 0;
    for (int i = 1; i<=n;i++) {
        long long a_i; //so buoc ingay
        
        cin >> a_i;

        if (a_i > temp_a) {
            counter ++;
        }
        else {counter =1;}

        temp_a = a_i;
        max_counter = max(max_counter, counter);
    }
        
    
    cout << max_counter;

    return 0;
}