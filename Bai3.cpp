#include<iostream>
using namespace std;

int main(){
	double gio_hang = 95;
	double thue_ban_hang_tieu_bang = 0.04;
	double thue_ban_hang_quan = 0.02;
	double tong_thue_ban_hang_tieu_bang = gio_hang * thue_ban_hang_tieu_bang;
	double tong_thue_ban_hang_quan = gio_hang * thue_ban_hang_quan;
	double tong_thue_ban_hang = tong_thue_ban_hang_tieu_bang * tong_thue_ban_hang_quan;
	double tong_gia_tri_gio_hang = gio_hang + tong_thue_ban_hang;
	cout <<"Gia tri gio hang : " << gio_hang <<"$" << endl;
	cout <<"Tong thue ban hang tieu bang : " << tong_thue_ban_hang_tieu_bang <<"$" << endl;
	cout <<"Tong thue ban hang quan : " << tong_thue_ban_hang_quan <<"$" << endl;
	cout <<"Tong thue ban hang : " << tong_thue_ban_hang <<"$" << endl;
	cout <<"Tong gia tri gio hang : " << tong_gia_tri_gio_hang <<"$" << endl;
	return 0;  

}

