#include <iostream>
using namespace std;

//logic tinh toan theo de bai
void  tongphantu(int a[],int n) {
    int result = 0;
    for (int i =0; i<n; i++) result += a[i];
    cout<< result;
}

void inrangoai_mang(int a[],int n) {
    cout << "===========ARRAY=============="<<endl;
     for (int i=0; i<n;i++){
        cout << a[i] << ' ';}
    
    cout << endl<<"==============================" <<endl;
}

void nhapmang(int a[],int n){
    for (int i=0; i<n;i++){
        cout << "a[" <<i << "]: ";
        cin >> a[i];
    }
}

//tim max min
void tim_max_min(int a[],int n){
    int max = a[0];
    int min = a[0];
    //max
    for (int i = 0; i<n;i++){  //1 < 2    , 1 2 3  4 5
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    cout << "max: " << max<< endl;
    //min 
 
    cout << "min: " << min<< endl;

}

//tim vi tri phan tu
void tim_vi_tri(int a[],int n){
    int ans = -1;
    int temp;
    cout <<"tim vi tri phan tu: ";
    cin >>  temp;

    for (int i = 0;i<n;i++){
        if (*(a+i)==temp) ans = i; 
    }
    cout << "vi tri: " << ans << endl;
}

void hoandoi(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;

}
//daonguocmang
void daonguocmang(int a[], int n){  
    for (int i = 0;i<n/2;i++){
        int j = n - 1 - i;
        hoandoi(a[i],a[j]);
    }

}

//main
int main() {
    int n;
    cout << "n: " ;
    cin >> n;
    int a[n];
    nhapmang(a,n);
    inrangoai_mang(a,n);
    daonguocmang(a,n);
    inrangoai_mang(a,n);

    return 0;
}