#include <iostream>
using namespace std;


void append(int b[],int c[]){
    for (int i =0;i<2;i++){
        c[i + 3] = b[i];

    }
}

int main() {
    // bai 1

    int *a = new int[3]{1, 2, 3}; //N=3

    int *b = new int[2]{4, 5};


    int *temp_a = new int[5];
    for (int i = 0;i <3;i++){
        temp_a[i] = a[i];//chuyen nha cac phan tu a qua temp_a de nang cap server =)))    
    }
    delete[] a; // xoa a vi bay gio array a chi con 1 2 3 ko con hoat dong nua=> a bay gio rổng
    int *c = temp_a;//N = 5

    //cap nhat tai vi tri a a[3] va a[4]
    append(b,c);
    cout << c[3] << " " << c[4];

    delete[] c;
    delete[] b;
    return 0;
}