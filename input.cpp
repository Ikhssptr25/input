#include <iostream>
using namespace std;
int main(){
   string nama;
   double jumlah;
   float lama;
   float bunga;
   
   
   getline(cin, nama);
   cin>>jumlah;
   cin>>lama;
   cin>>bunga;
   
   cout<<"nama   :"<<nama <<endl;
   cout<<"jumlah :"<<jumlah<<endl;
   cout<<"lama   :"<<lama;
   cout<<" tahun "<<endl;
   cout<<"bunga  :"<<bunga;
   cout<<"%"<<endl;
   return 0;

}
