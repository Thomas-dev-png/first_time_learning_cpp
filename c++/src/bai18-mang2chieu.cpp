#include <iostream>
using namespace std;

void print(int a[][3],int r){
    for (int r = 0;r<3;r++){
        for (int c = 0;c<3;c++){
            cout << a[r][c]<<" ";
        }
    cout << endl;
    }
}

int main() {

    int a[3][3];;// =>3X4 elems => 12*4 = 48 bytes


    for (int r = 0;r<3;r++){
        for (int c = 0;c<3;c++){
            cout<<"nhap vo"<<"a["<<r<<"]"<<"["<<c<<"]: ";
            cin >> a[r][c];
        }
    }
    print(a,3);

    return 0;
}