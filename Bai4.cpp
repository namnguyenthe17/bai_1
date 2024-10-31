#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double chi_phi_bua_an = 88.67; 
    double tien_thue= 0.0675; 
    double tien_tip = 0.20;    
	double so_tien_thue = chi_phi_bua_an * tien_thue;
    double tong_tien_khi_cong_thue= chi_phi_bua_an + so_tien_thue;
    double so_tien_tip = tong_tien_khi_cong_thue * tien_tip;
    double tong_hoa_don = tong_tien_khi_cong_thue + so_tien_tip;
    cout << "Chi phi bua an: " << chi_phi_bua_an <<"$" << endl;
    cout << "So tien thu: " << so_tien_thue <<"$" << endl;
    cout << "So tien tip: " << so_tien_tip <<"$" << endl;
    cout << "Tong hóa don: " << tong_hoa_don <<"$" << endl;

    return 0;
}
