#include <iostream>
using namespace std;

// //func
// long long tinh_giai_thua(int n) {
//     long long result =1;
//     for (int i = 1;i<=n;i++) {
//         result = result *i;
//     }
//     return result;


// bool so_nguyen_To(int n) {
//     bool ngto = true;
//     for (int i = 2;i<n;i++) {
//         if (n%i==0) ngto = false;
//     }
//     if (ngto) return true;
//     else return false;
// }
namespace GTNN {
    int min(int a , int b) { 
        if (a >b) return b;
        else return a;
    }

}

int UCLN(int a , int b){
    for (int i = (GTNN::min(a,b));i>=1;i--){
        if (a % i ==0 && b%i ==0) return i;
    }
    return 1;

}

int main(){
    int a ,b ;
    cout << "kiem tra UCLN a va b: __ __ ";
    cin >> a >> b;

    cout <<UCLN(a,b);



    return 0;
}