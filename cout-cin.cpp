#include <iostream>
using namespace std;

int main (){
	string nama, npm, hobi;
	float angka1, angka2, jumlah;
	
	cout <<"nama : ";
	getline(cin, nama);
	cout << "NPM : ";
	getline(cin, npm);
//	cin>>npm;
//	cin.ignore(1, '\n');
	cout<<"Hobi :";
	getline(cin, hobi);
	cout<<"nama saya = "<<nama<< " NPM saya = "<<npm<< " hobi saya = "<<hobi;
	
//	input
	cin>>angka1;
	cin>>angka2;
//	mesin
	jumlah=angka1 / angka2;
	
	cout<<"jumlah ="<<jumlah;
return 0;
}

