#include <iostream>
using namespace std;

int main (){
	
	/*ikhsan saputra
	  2117051037
	  kelas B*/
	  
   	// deklarasi variabel//
	string NPM, Tanggal_lahir, Bulan_lahir, Tahun_lahir;
	
        //input//
	cout<<"Masukkan NPM\t\t:"         ;getline(cin,NPM);
	cout<<"Masukkan Tanggal Lahir\t:" ;getline(cin,Tanggal_lahir);
	cout<<"Masukkan Bulan Lahir\t:"   ;getline(cin,Bulan_lahir);  
	cout<<"Masukkan Tahun Lahir\t:"   ;getline(cin,Tahun_lahir);
	
	 //output//
	cout<<endl;
	cout<<"Username\t:"<<NPM<<endl;
	cout<<"Password\t:"<<Tahun_lahir<<Bulan_lahir<<Tanggal_lahir<<endl;
	
	return 0;
}
