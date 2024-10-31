#include <iostream>
using namespace std;

int main() {
    
    double nhiet_do_new_york_city = 85.0;      
    double nhiet_do_denver = 88.0;   
    double nhiet_do_phoenix = 106.0; 
    double nhiet_do_moi_new_york_city = nhiet_do_new_york_city * 1.02;
    double nhiet_do_moi_denver = nhiet_do_denver * 1.02;
    double nhiet_do_moi_phoenix = nhiet_do_phoenix * 1.02;
    cout << "Nhiet do trung binh moi trong thang 7 sau khi tang 2%:" << endl;
    cout << "New York City: " << nhiet_do_moi_new_york_city << " do F" << endl;
    cout << "Denver: " << nhiet_do_moi_denver << " do F" << endl;
    cout << "Phoenix: " << nhiet_do_moi_phoenix << " do F" << endl;

    return 0;
}

