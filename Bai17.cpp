#include <iostream>
using namespace std;

int main() {
   
    int so_luong_co_phieu = 750;          
    double gia_moi_co_phieu = 35.00;       
    double hoa_hong = 0.02;      

  
    double so_tien_thanh_toan = so_luong_co_phieu * gia_moi_co_phieu;

  
    double so_tien_hoa_hong = so_tien_thanh_toan * hoa_hong;

   
    double tong_so_tien_thanh_toan = so_tien_thanh_toan + so_tien_hoa_hong;

    
    cout << "So tien thanh toan cho co phieu (khong co hoa hong): $" << so_tien_thanh_toan << endl;
    cout << "So tien hoa hong: $" << so_tien_hoa_hong << endl;
    cout << "Tong so tien thanh toan: $" << tong_so_tien_thanh_toan << endl;

    return 0;
}

