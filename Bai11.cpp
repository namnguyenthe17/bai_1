#include <iostream>
using namespace std;

int main() {
    double dung_tich_binh_xang = 20.0;        
    double so_dam_trong_thanh_pho = 23.5;              
    double so_dam_tren_cao_toc = 28.9;            
    double quang_duong_trong_thanh_pho = dung_tich_binh_xang * so_dam_trong_thanh_pho;
    double quang_duong_tren_cao_toc = dung_tich_binh_xang * so_dam_tren_cao_toc;
	cout << "Quang duong o to di duoc trong thanh pho voi mot binh xang: " << quang_duong_trong_thanh_pho << " dam." << endl;
    cout << "Quang duong o to di duoc tren duong cao toc voi mot binh xang: " << quang_duong_tren_cao_toc << " dam." << endl;

    return 0;
}

