#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //pass value in
    int n;
    cin >>n;

    //max value
    long long max_height = -1;
    int pos = -1;

    //logic block
    for (int i = 1; i <= n; i++){
        long long h; //height
        cin >>h;        
        if (h > max_height){
            max_height = h;
            pos = i;
        }
    }
    //print ket qua
    cout << max_height << " " << pos;



    
    return 0;
}