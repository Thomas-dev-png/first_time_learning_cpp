#include <iostream>
using namespace std;
#include <iomanip>

// //defind a struct
// struct my_location {
//     const char* street;
//     int num;
//     const char* city_name;
// };

int main() {
    // my_location c1 = {"nguyentrieuluat",26,"hcm"};
    // my_location c2 = {
    //     .street="nguyentrieuluat",
    //     .num = 26,
    //     .city_name = "hcm"};
    
    // cout <<"c1 city is "  << c1.city_name << endl;

    // int x ,y ,z ;
    // cout << "x, y ,z : ";
    // cin >> x >> y >> z;
    // cout << "value of x is: " << x << endl;
    // cout << "data of x is " << sizeof(x) << " bytes" << endl;
    // cout << "adress of x is " << &x << " ." << endl; //starting at the adress , 4 bytes of memory
    // cout << "adress of y is " << &y << " ." << endl;
    // cout << "adress of z is " << &z << " ." << endl;

    // cout << "y and z are" << y << "and" << z ;

        
    // double x = (float)4/3;
    // cout <<fixed << setprecision(2) << x;
    
    //string working
    // string s,t,w;
    // w = "Helllo guys my name is cat \n i love cookies";
    //getline() , gan string cho 1 bien (only tren 1 dong ko dc enter)
    // cout << "type s : ";
    // getline(cin,s,'-');
    // getline(cin,t);
    // cout << "s:" << s <<"--- first char is " << s[0] << endl;
    // cout << "t:" << t;
    // getline(cin,w);
    // getline(cin,t);
    // cout<<"w: "<< w << endl << "t: "<<t << endl;
    // cout << "w's size" << w.size() << endl; 
    // cout << "w's length" << w.length(); 

    // string hovaten,mssv;
    // getline(cin,hovaten,'-');
    // getline(cin,mssv);
    
    // cout << "hovaten: " << hovaten <<endl;
    // cout << "mssv: " << mssv <<endl;

    //so nguyen to
    // int n;
    // cin >> n;
    // bool nguyento = true;
    // for (int i = 2;i<n;i++) {
    //     if (n % i ==0) nguyento = false;}
    
    //     if (nguyento) cout << n << " la so nguyen to";
    //     else cout << n <<" ko phai la so nguyen to";
 
    // cout << "nah";

    //bang cuu chuong 2->9
    int j;
    cout << "From 2 -> : ";
    cin >> j;
    for (int i = 2;i<=j;i++){
        cout << "Bang cuu chuong " << i << endl;
        for (int k = 2;k<=10;k++) {
            cout << i << " x " << k << " = " << i*k<<endl;

        }
    }
    
    return 0;
}