#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int gia_tri_1 = 28;
    int gia_tri_2 = 32;
    int gia_tri_3 = 37;
    int gia_tri_4 = 24;
    int gia_tri_5 = 33;
    int sum = gia_tri_1 + gia_tri_2 + gia_tri_3 + gia_tri_4 + gia_tri_5;
    double gia_tri_trung_binh = static_cast<double>(sum) / 5;
    cout << "Gia tri trung binh: " << gia_tri_trung_binh << endl;

    return 0;
}

