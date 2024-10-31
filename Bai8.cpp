#include<iostream>
using namespace std;

int main() {
    double mon_1 = 15.59;
    double mon_2 = 24.59;
    double mon_3 = 6.59;
    double mon_4 = 12.59;
    double mon_5 = 3.59;
    double tong_tam_tinh = mon_1 + mon_2 + mon_3 + mon_4 + mon_5;
    
	double phan_tram_tien_thue = 0.07;
    double tien_thue = tong_tam_tinh * phan_tram_tien_thue;
    
    double tong_phai_tra = tong_tam_tinh + phan_tram_tien_thue;
    
    cout << "Gia cua cac mon do:\n";
    cout << "Mon do 1: " << mon_1 << "$" << endl;
    cout << "Mon do 2: " << mon_2 << "$" << endl;
    cout << "Mon do 3: " << mon_3 << "$" << endl;
    cout << "Mon do 4: " << mon_4 << "$" << endl;
    cout << "Mon do 5: " << mon_5 << "$" << endl;
	cout << "Tong tam tinh: " << tong_tam_tinh << "$" <<endl;
    cout << "So tien thue: " << phan_tram_tien_thue << "$" <<endl;
    cout << "Tong phai tra: " << tong_phai_tra << "$" <<endl;

    return 0;
}
