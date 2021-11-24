#include <iostream>
#include <cmath>
using name space std;
int main(){
  
  string tangal_transaksi;
  string bulan_transaksi;
  string tahun_transaksi;
  float bitcoin, rupiah;
  
  cout << " Tanggal Transaksi : "; cin>> tanggal_transaksi;
  cout << " Bulan Transaksi   : "; cin >> bulan_transaksi;
  cout << " Tahun Transaksi   : "; cin >> tahun_transaksi;
  cout << " Jumlah Uang       : "; cin >> rupiah;
  cout << "Bitcoin            : "; cin >> bitcoin;
  
  cout << "Tanggal Transaksi : " << tanggal_transaksi << bulan_transaksi << tahun_transaksi endl;
  cout << "Jumlah Bitcoin    : " << rupiah/bitcoin << endl;
  bitcoin = rupiah/bitcoin;
  
  return 0;
}