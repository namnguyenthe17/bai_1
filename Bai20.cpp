#include <iostream>
#include <cmath> 

using namespace std;

int main() {
  
    double chieu_cao = 6.0;        
    double chieu_dai = 100.0;        
    double dien_tich = 340.0;      
    int so_lop_son = 2;                    
    double dien_tich_tong_can_son = chieu_cao * chieu_dai * so_lop_son;
    double so_luong_gallon_can_thiet = dien_tich_tong_can_son / dien_tich;
    cout << "So luong gallon son can thiet de son 2 lop ao cho hang rao: " << so_luong_gallon_can_thiet<< endl;
 return 0;
}

