#include <iostream>
using namespace std;

int main() {
   
    double gia_goc = 14.95;         
    double loi_nhuan = 0.35;      

 
    double gia_ban = gia_goc + (gia_goc* loi_nhuan);


    cout << "Gia ban cua bo mach la: " << gia_ban << "$"<< endl;

    return 0;
}

