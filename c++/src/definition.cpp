#include <iostream>   // -> Máy hiểu: "Đã biết mặt cout thuộc họ std"
using namespace std;  // -> Máy hiểu: "Cho phép gọi thẳng tên cout"

int main() {
    cout << "Hi";     // -> Máy hiểu: "Tìm cout mặc định -> Không thấy -> Tìm trong std -> Thấy cout! -> Gọi Linker lôi mã máy của cout ra chạy"
    return 0;
}
