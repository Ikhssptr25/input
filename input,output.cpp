#include <iostream>
using namespace std;

int main (){
	
	/*ikhsan saputra
	  2117051037
	  kelas B*/
	  
   	 // deklarasi variabel//
	string tanggal_transaksi;
	string bulan_transaksi;
	string tahun_transaksi;
	float jumlah_uang;
	float harga_perbitcoin;
	
     //input//
	cout<<"Masukkan tanggal transaksi :"     ;getline(cin,tanggal_transaksi);
	cout<<"Masukkan bulan transaksi   :"     ;getline(cin,bulan_transaksi);
	cout<<"Masukkan tahun transaksi   :"     ;getline(cin,tahun_transaksi);  
	cout<<"Masukkan jumlah_uang       :"     ;cin>>jumlah_uang;
	cout<<"Masukkan harga per bitcoin :"     ;cin>>harga_perbitcoin;
	
	 //output//
	cout<<endl;
	cout<<"Tanggal Transaksi:"<<tanggal_transaksi<<" "<<bulan_transaksi<<" "<<tahun_transaksi<<endl;
	cout<<"jumlah Bitcoin   :"<<jumlah_uang/harga_perbitcoin<<" "<<"bitcoin"<<endl;
	
	return 0;
}
